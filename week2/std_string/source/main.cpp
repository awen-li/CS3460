#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create strings
    string s1 = "Hello";
    string s2 = "World";

    // Concatenation
    string s3 = s1 + " " + s2;
    cout << "Concatenation: " << s3 << endl;

    // Length
    cout << "Length of s3: " << s3.length() << endl;

    // Access characters
    cout << "First letter: " << s3[0] << endl;
    cout << "Last letter: " << s3[s3.size() - 1] << endl;

    // Substring
    cout << "Substring (0-4): " << s3.substr(0, 5) << endl;

    // Comparison
    if (s1 < s2)
        cout << s1 << " comes before " << s2 << endl;
}
