#include<iostream>
using namespace std;
#define ll long long 

int main()
{
    int t; 
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        int count = 0;
        while((n & (n-1)) != 0)
        {
            if(n%6 == 0)
                n /= 6;
            else
                n *= 2;
            count++; 
        }
        if(n == 1)
        cout<<count<<endl;
        else
        cout<<-1<<endl;
    }

    return 0;
}