#include "Program.h"

int Program::main()
{
    try
    {
        std::pair<double, double> nums = IOFunctions<double>::VariablesEnter();
        OperationName operationName = IOFunctions<double>::OperationEnter();
        IOFunctions<double>::PerformOperation(nums, operationName);
    }
    catch (char const* msg)
    {
        std::cout << msg;
    }

    return 0;
}