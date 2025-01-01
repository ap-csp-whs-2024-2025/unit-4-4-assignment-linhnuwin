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
        std::cout << "Invalid Number." << std::endl << "Enter a number from 1 to 100: ";
        std::cin >> number1;
    }
    std::cout << "Thank you for your timely response!" << std::endl;

    //Problem 2

    std::string favColor = "pink";
    std::string guess;
    int attempts = 1;

    std::cout << "Guess my favorite color: ";
    std::cin >> guess;

    while (guess != favColor)
    {
        std::cout << "Wrong!" << std::endl;
        std::cout << "Guess again: ";
        std::cin >> guess;
        attempts = attempts + 1;
    }

    std::cout << "Correct! My favorite color is pink. You guess it in " << attempts << " attempt(s).";

    // Problem 3
    int numCount;
    int sum = 0;

    std::cout << "How many numbers do you want to calculate the sum of?";
    std::cin >> numCount;

    for (int i = 1; i <= numCount; i = i + 1)
    {
        int num;
        std::cout << "Enter number " << i << ": ";
        std::cin >> num;
        sum = sum + num;
    }

    std::cout << "The sum of all the numbers is: " << sum << std::endl;
}
