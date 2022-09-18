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

    string s1, s2;
    cin>>s1>>s2;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i] <= 92)
        s1[i] += 32;
        if(s2[i] <= 92)
        s2[i] += 32;    
    }

    if(s1 < s2)
    cout<<-1;
    else if(s1 > s2)
    cout<<1;
    else
    cout<<0;

	return 0;
}
