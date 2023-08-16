// Calculater

#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        cout << "Do you want calculator:\n";
        string s;
        cin >> s;
        if (s == "Yes" || s == "yes")
        {
        }
        else
        {
            cout << "Good bye\n";
            break;
        }
        cout << "Number1:";
        double a, b, res;
        cin >> a;
        cout << "Number2:";
        cin >> b;
        cout << "Operation:";
        char op;
        cin >> op;
        if (op == '+')
        {
            res = a + b;
        }
        else if (op == '-')
        {
            res = a - b;
        }
        else if (op == '/')
        {
            if (b == 0)
            {
                cout << "Choose valid input\n";
                continue;
            }
            res = a / b;
        }
        else if (op == '*')
        {
            res = a * b;
        }
        else
        {
            cout << "Choose valid operation\n";
            continue;
        }
        cout << res << '\n';
    }
}