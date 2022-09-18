#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int x = 0, i = 2;
        while(pow(2, i) - 1 <= n)
        {
            int power = pow(2, i);
            if((n % (power - 1)) == 0)
            {
                x = n / (pow(2, i) - 1);
                break;
            }
            else
            i++;
        }

        cout<<x<<endl;
    }   

    return 0;
}