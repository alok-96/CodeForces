#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string m = "hello";
    int x = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == m[x])
        {
            x++;
        }
    }

    if(x == 5)
    cout<<"YES\n";
    else
    cout<<"NO\n";

    return 0;
}
