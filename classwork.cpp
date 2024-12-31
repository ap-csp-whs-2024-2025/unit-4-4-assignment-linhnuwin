#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Problem 1
    double number1;
    
    std::cout << "Pick a Number from 1 to 100: ";
    std::cin >> number1;

    while (number1 > 100 || number1 < 1)
    {
        std::cout << "Invalid Number";
        std::cin >> number1;
    }
    std::cout << "Thank you for your timely response!";
}
