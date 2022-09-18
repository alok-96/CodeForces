#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    map<char, int>m;
    for(int i=0; i<s.length(); i++)
    {
        if(i % 2 == 0)
        m[s[i]]++;
    }

    string ans = "";
    int count = 0;
    for(auto x:m)
    {
        for(int i=0; i<x.second; i++)
        {
            if(count == s.length()-1)
            {
                ans += x.first;
            }
            else
            {
                ans += x.first;
                ans += '+';
                count += 2;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}