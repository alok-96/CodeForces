#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    ll mid = 0;
    if (n % 2 == 0)
        mid = n / 2;
    else
        mid = n / 2 + 1;

    if (k <= mid)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        if(n%2 == 0)
        {
            cout<<k*2 - n<<endl;
        }
        else
        {
            cout<<k*2 - (n+1)<<endl;
        } 
    }

    return 0;
}


