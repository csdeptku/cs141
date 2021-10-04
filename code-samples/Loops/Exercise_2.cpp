/*
    Write a function count_a that takes in a string word
    and returns the number of a's in the word.
    The function should count both lowercase (a) and uppercase (A)
*/

#include <iostream>
using namespace std;

int count_a(string str)
{
    int length = str.length();
    int cntr = 0;

    for (int i = 0; i < length; i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'A')
            cntr++;
    }

    return cntr;
}

int main(void)
{
    cout << count_a("application") << endl;
    cout << count_a("bike") << endl;
    cout << count_a("Arthur") << endl;
    cout << count_a("Aardvark") << endl;

    return 0;
}