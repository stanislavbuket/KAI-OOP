/**
* Done by:
 * Student Name: Stanislav Buket
 * Variant: 3
 * Student Group: 121
 * Lab 1.1
 */

#include <iostream>
#include <stdexcept>
#include "StringManipulator.h"

int main()
{
    std::string input;
    std::cout << "Введіть рядок (тільки цифрові символи): ";
    std::cin >> input;

    try {
        // Створення об'єкта класу StringManipulator
        StringManipulator strManip(input);

        std::cout << "\nВведений рядок: " << strManip.getValue() << std::endl;

        std::cout << "Довжина рядка: " << strManip.getLength() << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}