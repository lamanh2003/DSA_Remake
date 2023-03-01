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

int ar[26];

inline int calc(int &n, int &k)
{
    for(int i = n; i; --i)
    {
        if(k == ar[i]) return i;
        else if(k > ar[i]) k -= ar[i];
    }
    return 0;
}

int main()
{
    faster();
    ar[1] = 1;
    for(int i = 2; i <= 26; ++i) ar[i] = ar[i - 1] << 1;
    int t = 1, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << (char) (calc(n, k) + 'A' - 1) << endl;
    }
    return 0;
}
