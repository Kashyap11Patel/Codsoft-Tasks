// Number Guessing Game

#include <iostream>
using namespace std;

int main()
{

    while (1)
    {
        cout << "Hi gamer say yes to proced:\n";
        string s;
        cin >> s;
        if (s == "Yes" || s == "yes")
        {
            cout << "Now guess the number:\n";
            int number = rand() % (1000);
            int n;
            cin >> n;
            if (number == n)
            {
                cout << "You guess correctly";
            }
            else
            {
                cout << "Better luck next time because the number is " << number << '\n';
            }
        }
        else
        {
            cout << "Good bye";
            break;
        }
    }
}