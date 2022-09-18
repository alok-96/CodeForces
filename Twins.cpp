#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int half = sum / 2 ;
    sort(a, a + n, greater<int>());
    int ans = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
        count++;
        if (ans > half)
            break;
    }

    cout << count << endl;

    return 0;
}
