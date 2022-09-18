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

        string s1, s2;
        cin >> s1>> s2;

        int count = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
                count++;
            else
            {
                if ((s1[i] == 'G' && s2[i] == 'B') || (s2[i] == 'G' && s1[i] == 'B'))
                    count++;
                else
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag && count == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}