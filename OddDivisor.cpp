#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
    
        if(n % 2 != 0)
        {
            cout<<"YES\n";
        }
        else
        {
            bool flag = true;
            while(n > 1)
            {
                if(n % 2 == 0)
                n /= 2;
                else 
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
    }   

    return 0;
}