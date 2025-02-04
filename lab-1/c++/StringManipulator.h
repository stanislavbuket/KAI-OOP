/**
* Done by:
 * Student Name: Stanislav Buket
 * Variant: 3
 * Student Group: 121
 * Lab 1.1
 */

#ifndef STRINGMANIPULATOR_H
#define STRINGMANIPULATOR_H

#include <string>

class StringManipulator
{
private:
    std::string value;

    // Приватний метод перевірки, чи містить рядок лише цифри
    bool isDigitsOnly(const std::string& str) const;

public:
    // Конструктор з параметром із перевіркою
    StringManipulator(const std::string& value);

    // Гетер для отримання значення рядка
    std::string getValue() const;

    int getLength() const;
};

#endif // STRINGMANIPULATOR_H
