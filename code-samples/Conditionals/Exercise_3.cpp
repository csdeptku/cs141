/*
    Write a function larger_number that takes in two numbers
    and returns the larger of the two numbers.
*/

#include <iostream>
using namespace std;

float larger_number(float num1, float num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main(void)
{
    cout << larger_number(42, 28) << endl;
    cout << larger_number(99, 100) << endl;
    cout << larger_number(1.5, 1) << endl;

    return 0;
}