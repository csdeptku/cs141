/*
    Write a C++ program that reads from the user a distance measured in miles
    and computes and displays this distance in kilometers.
    Every one mile equals 1.609 kilometers.
*/

#include <iostream>
using namespace std;

int main(void)
{
    float distanceInMiles;
    float distanceInKMs;

    cout << "Enter distance in miles: ";
    cin >> distanceInMiles;

    distanceInKMs = 1.609 * distanceInMiles;

    cout << "The equivalent distance is: " << distanceInKMs << " kilometers." << endl;
    
    return 0;
}