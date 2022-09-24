#include <iostream>
using namespace std;
#define ll long long

int main()
{
    char ch;
    cin >> ch;

    string s;
    cin >> s;

    char s1[10] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    char s2[10] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
    char s3[10] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    if (ch == 'L')
    {
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 8; j >= 0; j--)
            {
                if (s[i] == s1[j])
                    s[i] = s1[j + 1];
                else if (s[i] == s2[j])
                    s[i] = s2[j + 1];
                else if (s[i] == s3[j])
                    s[i] = s3[j + 1];
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            for(int j = 1; j<=9; j++)
            {
                if (s[i] == s1[j])
                    s[i] = s1[j - 1];
                else if (s[i] == s2[j])
                    s[i] = s2[j - 1];
                else if (s[i] == s3[j])
                    s[i] = s3[j - 1];
            }
        }
    }

    cout<<s<<endl;

    return 0;
}