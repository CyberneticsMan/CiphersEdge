// Puzzle.cpp
#include "Puzzle.h"

// Function to handle a computer-related text-based puzzle
void computerTextPuzzle() {

   
    cout << "You find an encrypted file on a computer with binary code written on it." << endl;
    cout << "You need to convert the binary code to ASCII to reveal the hidden message." << endl;

    string binaryCode;
    cout << "Enter the binary code (8 byts): ";
    cin >> binaryCode;
    //the code: 0101000001100001011100110111001101110111001100000111001001100100
    // Check if the binary code is 64 bits long
  

    int characterCount = 64;
    if (binaryCode.length() != characterCount) {
        cout << "Invalid binary code length. Please enter 8 byts." << endl;
        return;
    }
  
    stringstream sstream(binaryCode);
    string output;
    while(sstream.good())
    {
        std::bitset<8> bits;
        sstream >> bits;
        char c = char(bits.to_ulong());
        output += c;
    }

    // Convert binary code to ASCII
    // int decimal = 0;
    // for (int i = 0; i < characterCount; i++) {
    //     if (binaryCode[i] == '1') {
    //         decimal += 1 << (7 - i);
    //     }
    // }

    // Display the ASCII character
    cout << "The decrypted ASCII character is: " << output << endl;
}