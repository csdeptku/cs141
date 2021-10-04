/*
    Write a function either_only that takes in an integer
    and returns true if the integer is divisible by either 3 or 5, but not both. 
    The function should return false otherwise.
*/

#include <iostream>
using namespace std;

bool either_only(int number)
{
    if ((number % 3 == 0 || number % 5 == 0) && !(number % 3 == 0 && number % 5 == 0))
        return true;
    else
        return false;
}

int main(void)
{
    cout << either_only(9) << endl;
    cout << either_only(20) << endl;
    cout << either_only(7) << endl;
    cout << either_only(15) << endl;
    cout << either_only(30) << endl;

    return 0;
}