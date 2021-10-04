/*
    Write a function word_check that takes in a string word and returns a string. 
    The function should return the string "long" if the word is longer than 6 characters, 
    "short" if it is less than 6 characters, and "medium" if it is exactly 6 characters long.
*/

#include <iostream>
using namespace std;

string word_check(string word)
{
    int length = word.length();

    if (length > 6)
        return "long";
    else if (length < 6)
        return "short";
    else
        return "medium";
}

int main(void)
{
    cout << word_check("contraption") << endl;
    cout << word_check("fruit") << endl;
    cout << word_check("puzzle") << endl;

    return 0;
}