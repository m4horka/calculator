#ifndef CALCULATOR_IOFUNCTIONS_H
#define CALCULATOR_IOFUNCTIONS_H
#include <utility>
#include <iostream>
#include "../math/BinaryOperation.h"
#include "../math/UnaryOperation.h"

enum OperationName { Pow, Sqrt, Addition, Subtraction, Multiplication, Division};


template <class T>
class IOFunctions {
public:
    static std::pair<T, T> VariablesEnter()
    {
        T a1, a2;
        std::cout << "Enter first number:";
        std::cin >> a1;

        std::cout << std::endl << "Enter second number:";
        std::cin >> a2;

        std::pair<T, T> variables = std::make_pair(a1, a2);
        return variables;
    }
    static OperationName OperationEnter()
    {
        size_t type;
        OperationName operationName;
        std::cout << std::endl << "Chose a type of operation to perform: 1 - Unary operations 2 - Binary operations" << std::endl;
        std::cin >> type;
        if (type == 1)
        {
            std::cout << std::endl << "Chose a type of unary operation: 1 - pow 2 - sqrt" << std::endl;
            std::cin >> type;
            if (type == 1) operationName = Pow;
            else if (type == 2) operationName = Sqrt;
            else throw "Wrong number of the operation";
        }
        else if (type == 2)
        {
            std::cout << std::endl << "Chose a type of unary operation: 1 - addition  2 - subtraction  3 - multiplication  4 - division" << std::endl;
            std::cin >> type;
            if (type == 1) operationName = Addition;
            else if (type == 2) operationName = Subtraction;
            else if (type == 3) operationName  = Multiplication;
            else if (type == 4) operationName = Division;
            else throw "Wrong number of the operation";
        }
        else throw "Wrong number of the operation";
        return operationName;
    }
    static void PerformOperation(std::pair<T, T> nums, OperationName operationName)
    {
        if (operationName == Addition)
            std::cout << BinaryOperation<T>::Addition(nums.first, nums.second) << std::endl;
        else if (operationName == Subtraction)
            std::cout << BinaryOperation<T>::Subtraction(nums.first, nums.second) << std::endl;
        else if (operationName == Multiplication)
            std::cout << BinaryOperation<T>::Multiplication(nums.first, nums.second) << std::endl;
        else if (operationName == Division)
            std::cout << BinaryOperation<T>::Division(nums.first, nums.second) << std::endl;
        else if (operationName == Sqrt)
            std::cout << UnaryOperation<T>::Sqrt(nums.first, nums.second) << std::endl;
        else if (operationName == Pow)
            std::cout << UnaryOperation<T>::Pow(nums.first, nums.second) << std::endl;
    }
};


#endif //CALCULATOR_IOFUNCTIONS_H
