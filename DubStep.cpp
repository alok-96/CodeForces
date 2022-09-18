#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    
    int n = s.length();
    
    string ans = "";
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            
            if(ans[ans.length()-1] !=' ')
            ans += ' ';
            i = i + 2;
        }
        else
            ans += s[i];
    }
    
    cout<<ans<<endl;

    return 0;
}


