#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int count = 0;
    int temp = a[k-1];
    for(int i=0; i<n; i++)
    {
        if(a[i] > 0 && a[i] >= temp)
        count++;
    }
    cout<<count<<"\n";

	return 0;
}
