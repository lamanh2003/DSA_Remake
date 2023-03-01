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

int n, k, ar[25], sum;
bool check;

void solve(int cnt = 0, int cur = 0)
{
    if(check) return;
    if(cnt == k)
    {
        check = 1;
        return;
    }
    for(int j = 1; j <= n; ++j)
    {
        if(cur == sum) solve(cnt + 1);
        else
        {
            if(cur > sum) return;
            solve(cnt, cur + ar[j]);
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n >> k;
        for(int i = 1; i <= n; ++i)
        {
            cin >> ar[i];
            sum += ar[i];
        }
        if(sum % k) cout << 0 << endl;
        else
        {
            sum /= k;
            check = 0;
            solve();
            cout << check << endl;
        }
    }
    return 0;
}
