#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int fi = abs(1 - a);
        int se = abs(b - c) + abs(c - 1);

    

        if (fi < se)
            cout << 1 << endl;
        else if (fi > se)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}