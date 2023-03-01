#include <bits/stdc++.h>

#define ll long long
#define lf double
#define faster() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define multi() int T; cin>>T;cin.ignore();xx:while(T--)
#define br '\n'
#define fr(i, a, b) for(int i=a;i<b;i++)
#define frr(i, a, b) for(int i=a;i>b;i--)
#define fre(i, a, b) for(int i=a;i<=b;i++)
#define frre(i, a, b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(), (x).end()
using namespace std;

 
int main()
{
    faster();
    string s;
    multi()
    {
        cin >> s;
        int idx = s.size() - 1;
        while(s[idx] == '1')
        {
            s[idx] = '0';
            idx--;
        }
        if(idx >= 0) s[idx] = '1';
        cout << s << br;
    }
    return 0;
}

