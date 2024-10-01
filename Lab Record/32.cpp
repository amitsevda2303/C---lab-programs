// insert a string into a main text
#include <iostream>
#include <string>

using namespace std;

int main() {
    string mainText, insertText;
    int position;

    cout << "Enter the main text: ";
    getline(cin, mainText);

    cout << "Enter the text to insert: ";
    getline(cin, insertText);

    cout << "Enter the position to insert the text: ";
    cin >> position;

    if(position < 0 || position > mainText.length()) {
        cout << "Invalid position!" << endl;
    } else {
        mainText.insert(position, insertText);
        cout << "Updated text: " << mainText << endl;
    }

    return 0;
}
