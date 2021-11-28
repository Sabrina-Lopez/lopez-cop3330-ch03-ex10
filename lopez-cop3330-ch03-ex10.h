/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sabrina Lopez
 */

#include <iostream>

int main() {
    double operand1; //declare a double for the user's first operand
    double operand2; //declare a double for the user's second operand
    std::string operation; //declare a string for the user's operator/operation

    //tell the user to input an operator to create a mathematical operation and two operands to complete the operation with
    std::cout << "Please input an operator (i.e., +, -, *, /) and two operands. \n";

    //take the user's desired operation
    std::cin >> operation;

    //take the user's first inputted value
    std::cin >> operand1;

    //take the user's second inputted value
    std::cin >> operand2;

    if(operation == "+") { //if the operation is addition, then add the operands together
        double sum = operand1 + operand2; //find the sum of the operands

        //output the sum of the operands to the user
        std::cout << "The solution to " << operand1 << " " << operation << " " << operand2 << " equals " << sum << ".\n";
    }
    else if(operation == "-") { //if the operation is subtraction, then find the difference of the operands
        double difference = operand1 - operand2; //find the difference of the operands

        //output the difference of the operands to the user
        std::cout << "The solution to " << operand1 << " " << operation << " " << operand2 << " equals " << difference << ".\n";
    }
    else if(operation == "*") { //if the operation is multiplication, then find the product of the operands
        double product = operand1 * operand2; //find the product of the operands

        //output the product of the operands to the user
        std::cout << "The solution to " << operand1 << " " << operation << " " << operand2 << " equals " << product << ".\n";
    }
    else if(operation == "/") { //if the operation is division, then find the quotient of the operands
        double quotient = operand1 / operand2; //find the quotient of the operands

        //output the quotient of the operands to the user
        std::cout << "The solution to " << operand1 << " " << operation << " " << operand2 << " equals " << quotient << ".\n";
    }

    return 0;
}
