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

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            if (i < n- 2 && s[i + 2] == '0')
            {
                if (i >= n - 3)
                {
                    temp = temp * 10 + int(s[i]) - 48;
                    temp = temp * 10 + int(s[i + 1]) - 48;
                    ans += char(97 + temp - 1);
                    i += 2;
                }
                else if (i < n - 3)
                {
                    if (s[i + 3] == '0')
                    {
                        temp = int(s[i]) - 48;
                        ans += char(97 + temp - 1);
                    }
                    else
                    {
                        temp = temp * 10 + int(s[i]) - 48;
                        temp = temp * 10 + int(s[i + 1]) - 48;
                        ans += char(97 + temp - 1);
                        i += 2;
                    }
                }
            }
            else
            {
                temp = int(s[i]) - 48;
                ans += char(97 + temp - 1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}