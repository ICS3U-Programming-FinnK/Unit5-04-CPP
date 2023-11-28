// Created by: Finn Kitor
// Created on: November 28th, 2023
// this program is a calculator using different type parameters.
#include <iostream>
#include <stdexcept>
// Math signs, Addition, Subtraction, Multiplication, and Division.
float calculate(char sign, float firstNumber, float secondNumber) {
    switch (sign) {
        case '+':
            return firstNumber + secondNumber;
        case '-':
            return firstNumber - secondNumber;
        case '*':
            return firstNumber * secondNumber;
        case '/':
            if (secondNumber == 0) {
                throw std::runtime_error("Division by zero is not allowed.");
            }
            return firstNumber / secondNumber;
        default: //Invalid valid sign response
            throw std::invalid_argument("Invalid sign. Valid signs are +, -, *, /.");
    }
}

int main() {
    try {
        char sign;
        float firstNumber, secondNumber;
 // User inputs the math sign
        std::cout << "Enter the sign of the operation (+, -, *, /): ";
        std::cin >> sign;
 // User inputs the first integer
        std::cout << "Enter the first number: ";
        std::cin >> firstNumber;
 // User inputs the second integer
        std::cout << "Enter the second number: ";
        std::cin >> secondNumber;
 // Display the results to the user
        float result = calculate(sign, firstNumber, secondNumber);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid input: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
    }
 
    return 0;
}