#include <iostream>
#include <string>
using namespace std;

// to find the first occurrence of a pattern in a text
int findPattern(const string &text, const string &pattern) {
    // Edge case: if pattern is empty
    if (pattern.empty()) {
        return 0; // 
        }
    int textLength = text.length();
    int patternLength = pattern.length();

    // Loop through the text to check possible matches
    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;
        // Check if pattern matches starting at index i
        for (j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                break; // Mismatch found
            }}
        // If full pattern matched
        if (j == patternLength) {
            return i;
        }}
    return -1;}
void runTests() {
    string text = "hellopython";
    // Case 1: Pattern at the beginning
    cout << "Case 1 (Pattern at beginning): " 
         << findPattern(text, "hello") << endl;
    // Case 2: Pattern at the end
    cout << "Case 2 (Pattern at end): " 
         << findPattern(text, "python") << endl;
    // Case 3: Pattern not present
    cout << "Case 3 (Pattern not present): " 
         << findPattern(text, "c++") << endl;
    // Case 4: Empty pattern
    cout << "Case 4 (Empty pattern): " 
         << findPattern(text, "") << endl;}
int main() {
    runTests();
    return 0;
}
