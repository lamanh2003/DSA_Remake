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

int n;
int ar[35] = {};
vector<string> vs;
vector<int> tmp;

inline void print()
{
    string s = "";
    for(int &i : tmp) s += to_string(i) + ' ';
    vs.pb(s);
}

inline void solve(int i)
{
    for(int j = i + 1; j <= n; ++j)
    {
        if(ar[j] > ar[i])
        {
            tmp.pb(ar[j]);
            if(tmp.sz > 1) print();
            solve(j);
            tmp.pop_back();
        }
    }
}

int main()
{
    faster();
    int t = 1;
    //cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; ++i) cin >> ar[i];
        solve(0);
        sort(all(vs));
        for(string &i : vs) cout << i << endl;
    }
    return 0;
}