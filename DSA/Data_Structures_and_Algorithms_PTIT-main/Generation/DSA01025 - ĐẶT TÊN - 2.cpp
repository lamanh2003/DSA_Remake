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

int ar[20], n, k;

void print()
{
    for(int i = 1; i <= k; ++i) cout << (char) (ar[i] + 'A' - 1);
    cout << endl;
}

void solve(int i)
{
    for(int j = ar[i - 1] + 1; j < n - k + i; ++j)
    {
        ar[i] = j;
        if(i == k) print();
        else solve(i + 1);
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ++n;
        solve(1);
    }
    return 0;
}
