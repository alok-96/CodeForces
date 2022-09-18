#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    ll count = 0, count1 = 0;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
            count++;

        n /= 10;
    }

    if (count == 4 || count == 7)
        cout << "YES\n";
    else
    {
        ll countdigit = 0, c = 0;
        while (count > 0)
        {
            if (count % 10 == 4 || count % 10 == 7)
            c++;

            countdigit++;
            count /= 10;
        }
        if(c > 0 && countdigit > 0 && c == countdigit)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}
