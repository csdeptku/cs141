/*
    Write a C++ program that reads integers as long as they are positive.
    The program computes the average of the even integers. If there
    are no even integers then the program should print: "No Average".
    The program must also compute the minimum even integer.
*/

#include <iostream>
using namespace std;


int main(void)
{
    int x;
    int sum = 0;
    int cntr = 0;
    int min;

    cout << "Enter positive integers. Enter negative integer to stop: ";
    cin >> x;
    min = x;

    while (x > 0) {
        if (x % 2 == 0) {
            sum += x;
            cntr++;
        }
        if (x < min)
            min = x;
        
        cin >> x;
    }

    if (cntr == 0)
        cout << "No Average" << endl;
    else {
        float avg = sum / (float)cntr;

        cout << "Average of the even integers = " << avg << endl;
        cout << "The minimum even integer: " << min << endl;
    }    

    return 0;
}