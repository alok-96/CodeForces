#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        int n;
        cin>>n;
        
        vector< pair<string, int> >v1;
        vector< pair<int, int> >v2;
        for(int i=0; i<n; i++)
        {
            string c;
            int d, u;
            cin>>c>>d>>u;
            v1.push_back(make_pair(c, u));
            v2.push_back(make_pair(d, u));
        }
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int ans = 0;    
        for(int i=0; i<v1.size(); i++)
        {
            if(v1[i].second == v2[i].second)
            ans++;
        }
        
        cout<<"Case #"<<tc<<": "<<ans<<endl;
    }
    
    
    return 0;
}