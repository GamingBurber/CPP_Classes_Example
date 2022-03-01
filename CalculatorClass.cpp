#include <iostream>

using namespace std;

class Calculator {
public:
    int num1;
    int num2;
    char op;
};

int main()
{
    bool running = true;

    cout << "Welcome to an example to classes in C++, this is a calculator that uses classes to function\n";
    cout << "\n";

    while (running)
    {
        Calculator calc;
        
        cout << "Enter Operation: ";

        cin >> calc.num1;
        cin >> calc.op;
        cin >> calc.num2;

        if (calc.op == '+')
        {
            cout << calc.num1 + calc.num2 << endl;
        }
        else if (calc.op == '-')
        {
            cout << calc.num1 - calc.num2 << endl;
        }
        else if (calc.op == '*' || calc.op == 'x' || calc.op == 'X')
        {
            cout << calc.num1 * calc.num2 << endl;
        }
        else if (calc.op == '/' || calc.op == '÷' || calc.op == ':')
        {
            cout << calc.num1 / calc.num2 << endl;
        }
        char userIn;
        cout << "Enter E to exit, or any key to continue. . .\n";
        cin >> userIn;
        if (userIn == 'E' || userIn == 'e')
        {
            running = false;
        }
        else
        {
            running = true;
        }


    }
}