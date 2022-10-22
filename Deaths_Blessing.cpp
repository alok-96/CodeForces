// you have to submit this code in the codeforces (https://codeforces.com/contest/1749/problem/B)
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n];
        ll b[n];

        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        for (ll i = 0; i < n; i++)
            cin >> b[i];

        int index = 0, maxi = b[0];
        for (ll i = 1; i < n; i++)
        {
            if (b[i] > maxi)
            {
                maxi = b[i];
                index = i;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(i == index)
            continue;
            sum += b[i];
        }

        cout<<sum <<endl;
    }

    return 0;
}