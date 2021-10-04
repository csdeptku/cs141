/*
    Write a function reverse that takes in a string word
    and returns the word with its letters in reverse order.
*/

#include <iostream>
using namespace std;

string reverse(string word)
{
    string reversedWord = "";
    int length = word.length();

    for (int i = length - 1; i >= 0; i--)
        reversedWord.push_back(word[i]); // Adds the character word[i] to the end of the string reversedWord

    return reversedWord;
}

int main(void)
{
    cout << reverse("cat") << endl;
    cout << reverse("programming") << endl;
    cout << reverse("bootcamp") << endl;

    return 0;
}