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


int n, k;
vector<int> v;
vector<bool> f;
vector<vector<bool>> ans;

void check()
{
    int sum = 0;
    fre(i,1,n) sum += v[i] * f[i];
    if(sum == k) ans.push_back(f);
}

void solve(int i)
{
    for(int j = 0; j < 2; ++j)
    {
        f[i] = j;
        if(i == n) check();
        else solve(i + 1);
    }
}

int main()
{
    faster();
    cin >> n >> k;
    v.resize(n + 1);
    f.resize(n + 1);
    fre(i,1,n) cin >> v[i];
    solve(1);
    for(vector<bool> &i : ans)
    {
        fre(j,1,n) if(i[j]) cout << v[j] << ' ';
        cout << br;
    }
    cout << ans.size();
    return 0;

}