#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        map<string, int> mp;
        string s1[n];
        for (int j = 0; j < n; j++)
        {
            cin >> s1[j];
            mp[s1[j]]++;
        }

        string s2[n];
        for (int j = 0; j < n; j++)
        {
            cin >> s2[j];
            mp[s2[j]]++;
        }

        string s3[n];
        for (int j = 0; j < n; j++)
        {
            cin >> s3[j];
            mp[s3[j]]++;
        }

        int count1 = 0;
        for(int i=0; i<n; i++)
        {
            if(mp[s1[i]] == 1)
            count1 += 3;
            else if(mp[s1[i]] == 2)
            count1 += 1;
            else 
            continue;
        }

        int count2 = 0;
        for(int i=0; i<n; i++)
        {
            if(mp[s2[i]] == 1)
            count2 += 3;
            else if(mp[s2[i]] == 2)
            count2 += 1;
            else 
            continue;
        }
        
        int count3 = 0;
        for(int i=0; i<n; i++)
        {
            if(mp[s3[i]] == 1)
            count3 += 3;
            else if(mp[s3[i]] == 2)
            count3 += 1;
            else 
            continue;
        }

        cout<<count1<<" "<<count2<<" "<<count3<<endl;
    }

    return 0;
}