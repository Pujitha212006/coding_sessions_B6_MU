#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string to_lower(string str) {
    for(int i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = to_lower(input);
    cout << "Lowercase string: " << result << endl;
    return 0;
}
