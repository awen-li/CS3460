#include <iostream>
#include <string>
#include <string_view>
using namespace std;

int main() {
    string text = "Hello World";

    // Create a string_view on the full string
    string_view sv(text);
    cout << "Full view: " << sv << endl;

    // Substring view (first 5 chars)
    string_view sub(text.c_str(), 5);
    cout << "Substring view: " << sub << endl;

    // Safe: view is valid as long as 'text' exists
    cout << "Length of view: " << sv.size() << endl;

    // ⚠️ Danger: dangling string_view
    string_view badView;
    {
        string temp = "Temporary";
        badView = temp;   // badView refers to destroyed string
    }
    cout << "Dangling view (undefined): " << badView << endl;
}
