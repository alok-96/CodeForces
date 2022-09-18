#include <bits/stdc++.h>
#include<math.h>
#include <algorithm>
#include <numeric>
// #include <boost/math/common_factor.hpp>
using namespace std;


int main()
{
    int n;
    cin >> n;

    int count = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((lcm(i,j)/__gcd(i, j)) <= 3)
            count++;
        }
    }

    cout<<count<<endl;
    
    return 0;
}