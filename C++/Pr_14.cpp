#include <iostream>
#include <string>
using namespace std;

void reversit(string &str) {
    int length = str.length();
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    cout << "Enter a string: ";
    string inputString;
    getline(cin, inputString);

    reversit(inputString);

    // Printing
    cout << "Reversed string: " << inputString << endl;

    return 0;
}
