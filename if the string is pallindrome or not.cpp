#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string& s) {
        int first = 0;
        int last = s.size() - 1;

        while (first < last) {
            if (s[first] == s[last]) {
                first++;
                last--;
            } else {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (sol.isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
