/*
    Write a C++ program that reads a two-digit integer
    and prints the sum and the product of its digits.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int d1, d2;
    
    cout << "Enter a 2-digit integer: ";
    cin >> n;

    d2 = n % 10;
    d1 = n / 10;

    cout << "The sum of the 2 digits is: " << d1 + d2 << endl;
    cout << "The product of the 2 digits is: " << d1 * d2 << endl;

    return 0;
}