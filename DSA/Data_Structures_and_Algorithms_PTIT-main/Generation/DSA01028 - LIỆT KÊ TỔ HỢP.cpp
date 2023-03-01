// Created by Nguyễn Mạnh Quân

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

int n, k;
vi v(1, 0), ar;

void print()
{
    for(int i = 1; i <= k; ++i) cout << v[ar[i]] << ' ';
    cout << endl;
}

void solve(int i)
{
    for(int j = ar[i - 1] + 1; j <= n - k + i; ++j)
    {
        ar[i] = j;
        if(i == k) print();
        else solve(i + 1);
    }
}

int main()
{
    faster();
    int t = 1;
    //cin >> t;
    while(t--)
    {
        bool f[1005] = {};
        int x;
        cin >> n >> k;
        for(int i = 0; i < n; ++i)
        {
            cin >> x;
            if(!f[x])
            {
                v.pb(x);
                f[x] = 1;
            }
        }
        sort(all(v));
        n = v.sz - 1;
        ar.resize(v.sz);
        solve(1);
    }
    return 0;
}