#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        if(n < 2020)
        cout<<"NO\n";
        else
        {
            int rem = n % 2020;
            int quo = n / 2020;
            if(rem <= quo)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }

    return 0;
}