#include <iostream>
#include <map>

using namespace std;

int main() {
    // A container (map) for key-value pairs of alphabets and their morse code equivalents
    map<char, string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
        {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
        {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
        {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."}
    };
    // Input variable to collect data from the user via the terminal window
    string input;
    cout << "Enter a message in English (A - Z charecters only) ";
    getline(cin, input);
    // Output variable to display the full morse code message
    string output{};
    // Check if user enters no input
    if (input.empty()) {
        cout << "No input provided." << endl;
    // Immediately exit the program
        return 1;
    } else {
        // Convert each letter into uppercase
        for (char c : input) {
            c = toupper(c);  // Convert letters into uppercase
            // If the charecters in the user input exist in the map container, print their morse code equivalents
            if (morseCode.find(c) != morseCode.end()) {
                cout << c << ": " << morseCode[c] << endl;
                output += morseCode[c] + " ";
            } else if (c == ' ') {
                output += "   ";  // Add three spaces to the 'output' variable
                cout << endl;  // Skip a line
            }
        }
