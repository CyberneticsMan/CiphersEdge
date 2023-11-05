#include "DecryptionChallenge.h"

// Function to handle a hacking challenge
void decryptionChallenge() {
    cout << "You discover a hidden file containing encrypted code that seems to be the key to unlocking critical information." << endl;
    cout << "The code appears to be a complex algorithm that requires decryption to unveil its secrets." << endl;
    cout << "You must use your coding skills to decipher the algorithm and reveal the hidden message within a limited time." << endl;

    string encryptedCode = "2d3c4a1b5e";
    string userGuess;
    int attempts = 0;
    const int maxAttempts = 3;

    while (attempts < maxAttempts) {
        cout << "Enter your decryption guess (hint: the code is a rearrangement of alphanumeric characters): ";
        cin >> userGuess;
        if (userGuess == "abcd12345e") {
            cout << "Congratulations! You have successfully decrypted the code." << endl;
            cout << "The decrypted message reveals sensitive information about the corporation's illegal activities." << endl;
            return;
        } else {
            cout << "Incorrect decryption guess. Try again." << endl;
            attempts++;
        }
    }

    cout << "Too many incorrect attempts. The file self-destructs, and you barely escape the security sweep." << endl;
    cout << "You'll need to be more careful next time." << endl;
}
