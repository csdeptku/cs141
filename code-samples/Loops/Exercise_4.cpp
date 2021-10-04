/*
    Write a function sum_nums that takes in an integer max
    and returns the sum of all integer from 1 up to and including max.
*/

#include <iostream>
using namespace std;

int sum_nums(int max)
{
    int sum = 0;

    for (int i = 1; i <= max; i++)
        sum += i;
    
    return sum;
}

int main(void)
{
    cout << sum_nums(4) << endl;
    cout << sum_nums(5) << endl;

    return 0;
}