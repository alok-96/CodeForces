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

    int n;
    cin>>n;
    int count = 0;
    while(n--)
    {
        int a[3];
        int  count1 = 0;
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
            if(a[i] == 1)
            count1++;
        }

        if(count1 >= 2)
        count++;
    }

    cout<<count<<"\n";

	return 0;
}
