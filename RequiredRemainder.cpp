#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;

        if (n % x == y)
            cout << n << endl;
        else
        {
            if (n % x > y)
                cout << n - (n % x - y)<<endl;
            else
            {
                n = n - (n%x) - x + y;
                cout<<n<<endl;
            }
        }
    }

    return 0;
}