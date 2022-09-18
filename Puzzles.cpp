#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a, a + m, greater<int>());
    int ans = INT_MAX;
    for (int i = 0; i <= m-n; i++)
    {
        ans = min(ans, a[i] - a[i + n -1]);
    }

    cout << ans << endl;
    return 0;
}
