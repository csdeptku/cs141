/*
    Write a C++ program that reads two numbers, computes and prints their average.
    The programs should print "Small" if the average less than 30, "Medium" if it is
    equal to or greater than 30 but less than 120, and "Big" if it is equals to 120 or more.
*/

#include <iostream>
using namespace std;

float find_average(float num1, float num2)
{
    return (num1 + num2) / 2.0;
}

int main(void)
{
    float num1;
    float num2;

    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;

    float avg = find_average(num1, num2);

    cout << "The average = " << avg << endl;

    if (avg < 30)
        cout << "Small" << endl;
    else if (avg >= 30 && avg < 120)
        cout << "Medium" << endl;
    else
        cout << "Big" << endl;

    return 0;
}