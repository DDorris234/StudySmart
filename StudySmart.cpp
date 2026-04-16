#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to generate a simple summary
string summarize(string text) {
    int pos = text.find('.');
    if (pos != string::npos) {
        return text.substr(0, pos + 1);
    }
    return text;
}

// Function to simplify text (basic version)
string simplify(string text) {
    string result = "Simple explanation:\n";

    for (char c : text) {
        result += tolower(c);
    }

    return result;
}

int main() {
    cout << "=== StudyBuddy (C++ Console App) ===\n";

    cout << "\nPaste your notes:\n";
    string text;

    getline(cin, text);

    cout << "\n--- SUMMARY ---\n";
    cout << summarize(text) << endl;

    cout << "\n--- SIMPLIFIED ---\n";
    cout << simplify(text) << endl;

    cout << "\n=== End of Program ===\n";

    return 0;
}
