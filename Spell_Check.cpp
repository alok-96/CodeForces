#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n < 5 || n > 5)
            cout << "NO\n";
        else
        {
            int cT = 0, ci = 0, cm = 0, cu = 0, cr = 0;
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'T')
                    cT++;
                else if (s[i] == 'i')
                    ci++;
                else if (s[i] == 'm')
                    cm++;
                else if (s[i] == 'u')
                    cu++;
                else if (s[i] == 'r')
                    cr++;
                else
                {
                    flag = false;
                    break;
                }
            }

            if (!flag)
                cout << "NO\n";
            else if (flag && cT == 1 && ci == 1 && cm == 1 && cu == 1 && cr == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}