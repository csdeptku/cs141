/*
    Write a function, count_vowels, that takes in a string word
    and returns the number of vowels in the word.
    Vowels are the letters a, e, i, o, u.
*/

#include <iostream>
using namespace std;

int count_vowels(string str)
{
    int length = str.length();
    int cntr = 0;

    for (int i = 0; i < length; i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cntr++;
    }

    return cntr;
}

int main(void)
{
    cout << count_vowels("bootcamp") << endl;
    cout << count_vowels("apple") << endl;
    cout << count_vowels("pizza") << endl;

    return 0;
}
