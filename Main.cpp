#include <iostream>
#include "Puzzle.h" // Include the puzzle header file
#include "DecryptionChallenge.h" // Include the puzzle header file
#include "HackingChallenge.h" // Include the puzzle header file
#include <string>

using namespace std;
void hackerScenario();




// Function to handle the game logic
void hackerScenario() {
    cout << "You are a skilled hacker known by your alias, Cipher, operating in the underground world of cybercrime." << endl;
    cout << "One day, you receive an anonymous message from a whistleblower hinting at a massive corporate cover-up." << endl;
    cout << "The message contains encrypted data and the promise of a hefty payout if you can uncover the truth." << endl;
    cout << "As you delve deeper into the encrypted data, you realize the corporation is involved in illegal data mining and surveillance." << endl;
    cout << "Your goal is to expose the corporation's wrongdoing and protect the whistleblower's identity while evading the authorities and rival hackers." << endl;
    cout << "Navigate through complex security systems, decode encrypted messages, and use your hacking skills to bring the truth to light." << endl;
    cout << "Be careful, every move you make may have consequences, and your actions could have far-reaching implications for both yourself and the whistleblower." << endl;
    hackingChallenge();
}


int main() {
    hackerScenario(); // Call the hackerScenario function to run the hacker scenario
    return 0;
}