/*
    Write a C++ program that reads two integers
    and print the sum of the two integers
*/

#include <iostream>

int main(void)
{
    int x;
    int y;

    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    int sum = x + y;
    std::cout << "The sum is: " << sum << std::endl;
    
    return 0;
}