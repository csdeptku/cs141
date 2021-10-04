/*
    Write a function count_e that takes in a string word
    and returns the number of e's in the word
*/

#include <iostream>
using namespace std;

int count_e(string str)
{
    int length = str.length();
    int cntr = 0;

    for (int i = 0; i < length; i++)
        if (str[i] == 'e')
            cntr++;

    return cntr;
}

int main(void)
{
    cout << count_e("movie") << endl;
    cout << count_e("excellent") << endl;

    return 0;
}