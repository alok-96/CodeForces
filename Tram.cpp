#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    int pass = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {   
        int a, b;
        cin >> a >> b;

        temp = temp - a + b;
        pass = max(pass, temp);
    }

    cout << pass << endl;

    return 0;
}
