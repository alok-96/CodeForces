#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 12, greater<int>());
    int count = 0, sum = 0;
    for (int i = 0; i < 12; i++)
    {
        if (sum >= n)
            break;
        else
        {
            sum += a[i];
            count++;
        }
    }
    if(sum >= n)
    cout << count << endl;
    else
    cout<<-1<<endl;

    return 0;
}