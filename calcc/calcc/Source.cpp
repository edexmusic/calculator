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
            cout << "1) ����������� \n2)��������� �������� \n";
            cin >> p;
            switch (p)
            {
            case 1:
            {
                cout << "������ ��: + , - , * , /: ";
                cin >> op;
                cout << "������ ��� �����: ";
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