#include <iostream>
using namespace std;
int main()
{
    char operation = 0;
    double first_number = 0;
    double second_number = 0;
    double solution = 0;

    cout << "First number:";
    cin >> first_number;

    cout << endl << "Enter second number:";
    cin >> second_number;

    cout << endl << "Enter an operation to perform, choose one from this list: +,-,/,*\n";
    cout << "Enter your operation:";
    cin >> operation;
    cin.ignore();

    if (operation != '+' && operation != '-'&& operation != '/' && operation != '*')
    {
        cout << endl << "Invalid operation! Aborting!" << endl << "Press Enter to exit.";
        cin.get();
        return 1;
    }

    if (operation == '+')
        solution = first_number + second_number;

    else if (operation == '-')
        solution = first_number - second_number;

    else if (operation == '*')
        solution = first_number * second_number;

    else if (operation == '/')
    {
        if ( second_number == 0 )
        {
            cout << endl << "You can't divide by zero! Aborting!";
            cout << endl << "Press Enter to exit.";
            cin.get();
            return 2;
        }
        solution = first_number / second_number;
    }

    cout << endl << "Your answer is: " << solution << endl << "Press Enter to exit." << endl;
    cin.get();
    return 0;
}