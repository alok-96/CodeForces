#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        string ans = "";
        char ch = 'a';
        for (int i = 1; i <= n; i++)
        {
            ans += ch;
            ch++;
            if (i % b == 0)
                ch = 'a';
        }
        cout<<ans<<"\n";
    }

    return 0;
}