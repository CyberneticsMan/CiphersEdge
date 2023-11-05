#include "HackingChallenge.h"


// Function to handle a hacking challenge
void hackingChallenge() {
    cout << "You come across a secure government server with a sophisticated firewall and encryption system." << endl;
    cout << "To gain access to the confidential data, you must bypass the firewall and decrypt the security protocol within a limited timeframe." << endl;

    string firewallBypass;
    cout << "Enter the command to bypass the firewall: ";
    cin >> firewallBypass;

    string decryptionKey;
    cout << "Enter the decryption key: ";
    cin >> decryptionKey;

    // Check if the firewall bypass and decryption key are correct
    if (firewallBypass == "sudo" && decryptionKey == "AES256") {
        cout << "Congratulations! You have successfully bypassed the firewall and decrypted the security protocol." << endl;
        cout << "You now have access to the confidential data revealing crucial information about the government's surveillance program." << endl;
    } else {
        cout << "Firewall breach detected! The security system locks you out, triggering an alert to the authorities." << endl;
        cout << "You must find another way to gain access before they trace your location." << endl;
    }
}
