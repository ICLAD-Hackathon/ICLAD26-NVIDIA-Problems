# Step 1: Sign Up for Vertex AI Express Mode
Express Mode bypasses complex enterprise Identity and Access Management (IAM) configurations, letting you use API keys natively within Google Cloud.
Navigate to the official onboarding page: Vertex AI Express Mode Overview and click the link to launch the sandbox.
On your main Welcome to Agent Platform dashboard, look at the bottom-left corner and click the link that says 🔑 Get API key.
This will open the keys page. Click the + Create API Key button at the top of the table.
Copy the newly generated key string and save it in a text file on your computer.

# Step 2: Set Up Local Environment
## 1. Initialize Project & Install SDK
Run these commands in your terminal to create the project directory, set up a virtual environment, and install the Google GenAI SDK:
```
mkdir ICLAD26_contest && cd ICLAD26_contest
python3 -m venv venv
source venv/bin/activate
pip install google-genai
```

## 2. Configure Environment Variable
Save your Express Mode API key to your environment:
```
export EXPRESS_MODE_KEY="your_actual_api_key_here"
```
## 3. Create Tester Script
Create a file named test_pipeline.py and paste the following code:

```
import os
import sys
import time
from google import genai
from google.genai.errors import APIError

api_key = os.environ.get("EXPRESS_MODE_KEY")
if not api_key:
    print("[ERROR] Environment variable 'EXPRESS_MODE_KEY' not found.")
    sys.exit(1)

try:
    client = genai.Client(
        vertexai=True, 
        api_key=api_key,
        http_options={"headers": {"X-Goog-User-Project": ""}} 
    )
except Exception as e:
    print(f"[ERROR] Failed to initialize Client: {e}")
    sys.exit(1)

def execute_with_retry(prompt, model_name="gemini-3-flash-preview", max_retries=5):
    """Wrapper to handle strict Express Mode 429 Rate Limits."""
    delay = 2  
    for attempt in range(max_retries):
        try:
            response = client.models.generate_content(model=model_name, contents=prompt)
            return response.text
        except APIError as e:
            if e.code == 429:
                print(f"[WARN] 429 Resource Exhausted. Retrying in {delay}s... ({attempt + 1}/{max_retries})")
                time.sleep(delay)
                delay *= 2  
            else:
                raise e
        except Exception as e:
            raise e
    raise RuntimeError("Maximum retries exceeded due to strict quota limits.")

print("[INFO] Spacing connections. Dispatching workload...")
try:
    output = execute_with_retry("Local connection pipeline active. Test handshake. Say something funny to confirm you are an AI")
    print("\n--- Pipeline Execution Output ---")
    print(output)
except Exception as e:
    print(f"\n[ERROR] Pipeline blocked: {e}")
```

## 4. Verify Connection
Run the script to confirm the handshake succeeds:
```
python3 test_pipeline.py
```
