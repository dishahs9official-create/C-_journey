/*
Take a 3-digit number and determine whether it is a palindrome
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int left = 0;
    int right = word.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (word[left] != word[right]) {
            isPalindrome = false;
            break; // Stop early if letters don't match
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "It is a palindrome!" << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}