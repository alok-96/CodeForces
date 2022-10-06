#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(a == 1 && b == 1 && c == 1)
        cout<<a+b+c;
    else if(a==1 || b == 1 || c == 1)
    {
        cout<<max( (a+b+c), max((a*(b+c)), ((a+b)*c) ));
    }
    else
    cout<<a*b*c;

    return 0;
}
