#include <iostream>
#include "Puzzle.h" // Include the puzzle header file
#include <string>

using namespace std;

// Function to handle the game logic
void playGame() {
    cout << "Welcome to Cipher's Edge!" << endl;
    cout << "You are a skilled hacker who has stumbled upon encrypted messages hinting at a high-level government conspiracy." << endl;
    cout << "Your goal is to uncover the truth behind these messages and navigate the complexities of the digital world." << endl;

    string playerName;
    cout << "Enter your name: ";
    getline(cin, playerName);

    cout << "Welcome, " << playerName << "! Let's get started." << endl;

    // Game loop
    bool gameOver = false;
    while (!gameOver) {
        // Implement your game logic here
        // Provide options for the player and handle their choices
        // Use if-else statements or switch cases for different scenarios

        // For example:
        cout << "What will you do next?" << endl;
        cout << "1. Decrypt the next message." << endl;
        cout << "2. Investigate suspicious activity." << endl;
        cout << "3. Social engineer a contact for information." << endl;
        cout << "4. Quit the game." << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                computerTextPuzzle();
                cout << "You successfully decrypted the message. It reveals a shocking plot against the government." << endl;
                break;
            case 2:
                cout << "You investigate the suspicious activity and find evidence of a hidden government operation." << endl;
                break;
            case 3:
                cout << "You manage to social engineer a contact for vital information, exposing a corrupt official." << endl;
                break;
            case 4:
                gameOver = true;
                cout << "Thanks for playing Cipher's Edge! See you next time." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
                break;
        }
    }
}

int main() {
    // Call the playGame function to start the game
    playGame();
    return 0;
}
