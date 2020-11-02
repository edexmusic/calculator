#include <iostream>
#include <windows.h>
using namespace std;
int p;
char op;
float num1, num2;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    {
        while (p != 2)
        {
            cout << "1) Калькулятор \n2)Завершити програму \n";
            cin >> p;
            switch (p)
            {
            case 1:
            {
                cout << "Оберіть дію: + , - , * , /: ";
                cin >> op;
                cout << "Введіть два числа: ";
                cin >> num1 >> num2;
                if (op == '-')

                    cout << num1 - num2;

                if (op == '+')
                {
                    cout << num1 + num2;
                }
                if (op == '/')
                {
                    cout << num1 / num2;
                }

                if (op == '*')
                {
                    cout << num1 * num2;
                }
            }
            case 2:
            {
                break;
            }
            }
        }
    }
}