/*
    Predict what the following cout lines will print out.
    Check your work by running the code and comparing the output to your prediction.
*/

#include <iostream>
using namespace std;

int main(void)
{
    cout.setf(ios::boolalpha); // Don't care about this line

    int num = 40;
    num + 5;
    cout << "1: " << num << endl;

    num += 2;
    cout << "2: " << num << endl;

    bool isEven = num % 2 == 0;
    cout << "3: " << isEven << endl;

    bool isNegative = num < 0;
    cout << "4: " << isNegative << endl;

    cout << "5: " << (isEven || isNegative) << endl;

    cout << "6: " << (isEven && isNegative) << endl;

    cout << "7: " << (isEven && !isNegative) << endl;

    return 0;
}