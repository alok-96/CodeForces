#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int c = 1, count = 0;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i] == s[i-1])
        {
            c++;
            count = max(count, c);
        }
        else
        {
            count = max(count, c);
            c = 1;
        }
    }

    if(count >= 7)
    cout<<"YES\n";
    else
    cout<<"NO\n";


    return 0;
}
