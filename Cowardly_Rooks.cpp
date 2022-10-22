#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;

        int a[n+1] ={0}, b[n+1] = {0};
        for(int i= 0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;

            a[i+1] = x;
            b[i+1] = y; 
        }

        int c = 0;
        for(int i=1; i<=n; i++)
        {
            if(a[i] == 0 && b[i] == 0)
            c++;
        }

        if(c >= 1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}