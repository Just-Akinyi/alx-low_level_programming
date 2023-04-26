#!/usr/bin/python3
from flask import Flask, request
import africastalking

app = Flask(__name__)

# Set your app credentials
username = "AfricanDracula"  # Replace with your username
api_key = "d9d545d88c906a00e9ad388f0af6b4a335783d9ca4d107d5caa03e09c6cab6b9"

# Initialize the SDK
africastalking.initialize(username, api_key)

# Get the SMS service
sms = africastalking.SMS

# Define a route for sending SMS
@app.route('/sms', methods=['POST'])
def send_sms():
    # Parse the request data
    data = request.get_json()
    recipients = data['+254704494504']
    message = data['message me when you get home']
    sender = data['sender']

    try:
        # Send the SMS
        response = sms.send(message, recipients, sender)
        return {'message': 'SMS sent successfully', 'response': response}
    except Exception as e:
        return {'error': str(e)}

if __name__ == '__main__':
    app.run()
