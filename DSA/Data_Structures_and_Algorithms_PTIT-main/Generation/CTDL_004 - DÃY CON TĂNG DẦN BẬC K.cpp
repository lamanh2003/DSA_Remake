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


int n, k, ar[105];
ll ans = 0;


void solve(int i, int cur)
{
    for(int j = i + 1; j <= n; ++j)
        if(ar[j] > ar[i])
        {
            cur++;
            if(cur == k) ans++;
            solve(j, cur);
            cur--;
        }
}

int main()
{
    faster();
    cin >> n >> k;
    fre(i,1,n) cin >> ar[i];
    solve(0,0);
    cout << ans;
    return 0;
}
