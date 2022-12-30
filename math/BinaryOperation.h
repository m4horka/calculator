#ifndef CALCULATOR_BINARYOPERATION_H
#define CALCULATOR_BINARYOPERATION_H

template <class T>
class BinaryOperation {
public:
    static T Addition (T v1, T v2)
    {
        return (v1 + v2);
    }
    static T Subtraction (T v1, T v2)
    {
        return (v1 + v2);
    }
    static T Multiplication (T v1, T v2)
    {
        return (v1 * v2);
    }
    static T Division (T v1, T v2)
    {
        if (v2 == 0) throw "division by 0";
        return (v1 / v2);
    }
};


#endif //CALCULATOR_BINARYOPERATION_H
