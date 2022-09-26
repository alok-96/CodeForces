#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[a[i]]++;

        int count = 0;
        for (auto x : mp)
        {
            count += min(x.second, c);
        }

        cout << count << endl;
    }
    return 0;
}