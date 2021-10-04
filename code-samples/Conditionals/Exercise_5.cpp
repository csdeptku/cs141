/*
    Write a function number_check that takes in a number and returns a string.
    The function should return the string "positive" if the number is positive, 
    "negative" if the number is negative, and "zero" if the number is zero.
*/

#include <iostream>
using namespace std;

string number_check(float num)
{
    if (num > 0)
        return "Positive";
    else if (num < 0)
        return "Negative";
    else
        return "Zero";
}
int main(void)
{
    cout << number_check(5) << endl;
    cout << number_check(-2) << endl;
    cout << number_check(0) << endl;

    return 0;
}