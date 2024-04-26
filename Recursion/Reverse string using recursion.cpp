#include <iostream>
#include <string>

using namespace std;

// Recursive function to reverse a string
string ReverseString(const string& str) {
    // Base case: if the string is empty or has only one character, return the string itself
    if (str.size() <= 1) {
        return str;
    } else {
        // Recursive case: reverse the rest of the string and concatenate the current character
        return ReverseString(str.substr(1)) + str[0];
    }
}

int main() {
    // Example usage:
    string originalString = "Hello, World!";
    string reversedString = ReverseString(originalString);
    
    cout << "Original string: " << originalString << endl;
    cout << "Reversed string: " << reversedString << endl;

    return 0;
}
