#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string to_upper(string str) {
    for(int i = 0; i < str.size(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = to_upper(input);
    cout << "Uppercase string: " << result << endl;
    return 0;
}
