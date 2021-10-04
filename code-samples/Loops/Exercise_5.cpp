/*
    Write a function factorial that takes in an integer num
    and returns the product of all integers from 1 up to and including num.
*/

#include <iostream>
using namespace std;

int factorial(int num)
{
    int product = 1;

    for (int i = 1; i <= num; i++)
        product *= i;
    
    return product;
}

int main(void)
{
    cout << factorial(3) << endl;
    cout << factorial(5) << endl;

    return 0;
}