#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

int main()
{
    string s;
    cin >> s;

    int n = s.length(), countup = 0, countlo = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            countup++;
        else
            countlo++;
    }

    if (countup == n)
    {
        for (int i = 0; i < n; i++)
        {
            s[i] += 32;
        }
        cout << s;
    }
    else if (countup == n - 1 && (s[0] >= 97 && s[0] <= 122))
    {
        s[0] -= 32;
        for (int i = 1; i < n; i++)
        {
            s[i] += 32;
        }
        cout << s;
    }
    else
        cout << s;

    return 0;
}
