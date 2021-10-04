/*
    Write a function is_palindrome that takes in a string word
    and returns the true if the word is a palindrome, false otherwise. 
    A palindrome is a word that is spelled the same forwards and backwards.
*/

#include <iostream>
using namespace std;

bool is_palindrome(string word)
{
    string reversedWord = "";
    int length = word.length();

    for (int i = length - 1; i >= 0; i--)
        reversedWord.push_back(word[i]);

    if (word == reversedWord)
        return true;
    else
        return false;
}


int main(void)
{
    cout << is_palindrome("racecar") << endl;
    cout << is_palindrome("kayak") << endl;
    cout << is_palindrome("bootcamp") << endl;

    return 0;
}