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
    string str;
    int n;
    multi()
    {
        cin >> n;
        cout << n << ' ';
        cin >> str;
        int i = str.size() - 2;
        while (i >= 0 && str[i] >= str[i + 1]) --i;
        if(i < 0)
        {
            cout << "BIGGEST" << br;
            continue;
        }
        int j = str.size() - 1;
        while(str[i] >= str[j]) j--;
        swap(str[i], str[j]);
        sort(str.begin() + i + 1, str.end());
        cout << str << br;
    }
    return 0;
}
