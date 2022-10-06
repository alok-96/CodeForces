#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

int main()
{
    ll n, m;
    cin>>n>>m;

    ll a[m];
    for(int i=0; i<m; i++)
        cin>>a[i];

    ll start = 1, ans = 0;
    for(int i=0; i<m; i++)
    {
        if(a[i] >= start)
        {
            ans += a[i] - start;
            start = a[i];
        }
        else
        {
            ans += n- start + 1;
            start = 1;
            ans += a[i] - start;
            start = a[i];
        }
    }

    cout<<ans;

    return 0;
}
