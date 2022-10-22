#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        ll a[n], odd = 0, even = 0, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        for (ll j = 0; j < q; j++)
        {
            int x, y;
            cin >> x >> y;

            if (x == 0)
            {
                sum = sum + even * y;
                if (y % 2 != 0)
                {    odd = odd + even;
                    even = 0;
                }
            }
            else
            {
                sum = sum + odd * y;
                if(y % 2 != 0)
                {
                    even = even + odd;
                    odd = 0;
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}