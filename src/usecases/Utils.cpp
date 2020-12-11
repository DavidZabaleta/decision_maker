#include <iostream>
#include <string>

#include "../headers/Utils.h"

void printMessage(std::string message)
{
    std::cout << message << std::endl;
}

std::string getStringLine()
{
    std::string input;

    std::cin >> input;

    return input;
}

int getIntLine()
{
    int input;

    std::cin >> input;

    return input;
}

std::string inputStringPrinter(std::string message)
{
    printMessage(message);
    return getStringLine();
}

int inputIntPrinter(std::string message)
{
    printMessage(message);
    return getIntLine();
}
