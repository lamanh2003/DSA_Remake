#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int n;
int ar[20];
vector<vector<int>> res;
vi v;

void solve(int i, int sum = 0)
{
    if(sum & 1) res.pb(v);
    if(i > n) return;
    for(int j = i; j <= n; ++j)
    {
        v.pb(ar[j]);
        solve(j + 1, sum + ar[j]);
        v.pop_back();
    }
}

int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; ++i) cin >> ar[i];
        sort(ar + 1, ar + n + 1, greater<int>());
        solve(1);
        sort(all(res));
        for(vector<int> &i : res)
        {
            for(int &j : i) cout << j << ' ';
            cout << endl;
        }
        v.clear();
        res.clear();
    }
    return 0;
}
