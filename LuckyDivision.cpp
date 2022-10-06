#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

int main()
{
    int n;
    cin >> n;

    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        int temp = i, count = 0, count1 = 0;
        while (temp > 0)
        {
            if (temp % 10 == 4 || temp % 10 == 7)
                count++;

            temp /= 10;
            count1++;
        }

        if (count == count1)
        {
            if (n % i == 0)
            {
                flag = true;
                break;
            }
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
