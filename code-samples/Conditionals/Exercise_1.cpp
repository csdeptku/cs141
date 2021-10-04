/*
    Write a function is_div_by_5 that takes in an integer 
    and returns the boolean true if the given integer is divisible by 5, false otherwise.
*/

#include <iostream>
using namespace std;

bool is_div_by_5(int number)
{
    if (number % 5 == 0)
        return true;
    else
        return false;
}

int main(void)
{
    cout << is_div_by_5(10) << endl;
    cout << is_div_by_5(40) << endl;
    cout << is_div_by_5(42) << endl;
    cout << is_div_by_5(8) << endl;

    return 0;
}