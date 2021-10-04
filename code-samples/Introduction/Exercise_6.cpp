/*
    Write a function average_of_three that takes in three integers
    and returns the average of the three numbers.
*/

#include <iostream>
using namespace std;

float average_of_three(int num1, int num2, int num3)
{
    return (num1 + num2 + num3) / 3.0;
}

int main(void)
{
    cout << average_of_three(3, 7, 8) << endl;
    cout << average_of_three(2, 5, 17) << endl;
    cout << average_of_three(2, 8, 1) << endl;
    
    return 0;
}