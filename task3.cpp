// Total word count

#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        cout << "Do you want count?\n";
        string s;
        cin >> s;
        if (s == "Yes" || s == "yes")
        {
        }
        else
        {
            cout << "Good bye";
            break;
        }
        cout << "Enter the string: ";
        getline(cin >> ws, s);
        int ans = 0;
        for (auto i : s)
            ans += (i != ' ');
        cout << "Your file contains " << ans << " words\n";
    }
}
