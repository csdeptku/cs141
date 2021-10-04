/*
    Write a function longer_string that takes in two strings
    and returns the longer of the two strings. In the case of a tie, 
    the function should return the first string.
*/

#include <iostream>
using namespace std;

string longer_string(string str1, string str2)
{
    if (str1.length() >= str2.length())
        return str1;
    else
        return str2;
}

int main(void)
{
    cout << longer_string("Computer", "Science") << endl;
    cout << longer_string("summer", "fall") << endl;
    cout << longer_string("coder", "programmer") << endl;

    return 0;
}