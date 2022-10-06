#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int fi, se;
        cin >> fi >> se;
        v.pb(mp(fi, se));
    }

    sort(v.begin(), v.end());
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (v[i].first < s)
            s += v[i].second;
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
