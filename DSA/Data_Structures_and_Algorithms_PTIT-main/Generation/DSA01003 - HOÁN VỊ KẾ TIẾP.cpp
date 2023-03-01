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
    int n;
    multi()
    {
        cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        next_permutation(all(a));
        for(int i : a) cout << i << ' ';
        cout << br;
    }
    return 0;
}

