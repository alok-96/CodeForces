#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int si = 0, sj=0, sk = 0;
    for(int p=0; p<n; p++)
    {
        int i, j, k;
        cin>>i>>j>>k;
        si += i;
        sj += j;
        sk += k;
    }

    if(si == 0 && sj == 0 && sk == 0)
    cout<<"YES\n";
    else
    cout<<"NO\n";

    return 0;
}