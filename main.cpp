#include <iostream>

bool isPrime(int number);
int getUserInput(const std::string& outputMessage);

int main()
{
    isPrime(getUserInput("please enter a number to check if it is prime: \n"))
    ? std::cout << "true\n" : std::cout << "false\n";
    return 0;
}

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i < number; i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}

int getUserInput(const std::string& outputMessage) {
    int input;
    std::cout << outputMessage;
    std::cin >> input;
    return input;
}