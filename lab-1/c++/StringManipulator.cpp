/**
* Done by:
 * Student Name: Stanislav Buket
 * Variant: 3
 * Student Group: 121
 * Lab 1.1
 */

#include "StringManipulator.h"
#include <stdexcept>
#include <cctype>

// Приватний метод перевірки, чи містить рядок лише цифри
bool StringManipulator::isDigitsOnly(const std::string& str) const
{
    for (char ch : str)
    {
        if (!std::isdigit(static_cast<unsigned char>(ch)))
        {
            return false;
        }
    }
    return true;
}

// Конструктор з параметром із перевіркою
StringManipulator::StringManipulator(const std::string& value) : value(value)
{
    if (!isDigitsOnly(value))
    {
        throw std::invalid_argument("Рядок має містити лише цифрові символи.");
    }
}

// Гетер для отримання значення рядка
std::string StringManipulator::getValue() const
{
    return value;
}

int StringManipulator::getLength() const
{
    return static_cast<int>(value.length());
}
