#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int c0 = 0, c1 = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '0')
        c0++;
        else
        c1++;
    }

    cout<<abs(c0-c1)<<endl;

    return 0;
}