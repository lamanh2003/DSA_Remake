// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

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


vector<pair<int, int>> lP;
vector<vector<int>> ar;
string res;
int a, b;


void solve(int n, int v)
{
    if (n == 0) return;
    if (ar[n][v] == ar[n - 1][v]) solve(n - 1, v);
    else
    {
        solve(n - 1, v - lP[n].first);
        res[n - 1] = '1';
    }
}

int main()
{
    faster();
    cin >> a >> b;
    ar.resize((a + 1), vector<int>(b + 1, 0));
    lP.resize(a + 1);
    for (int i = 1; i <= a; i++)
    {
        res = res + "0";
        cin >> lP[i].second;
    }
    fre(i, 1, a) cin >> lP[i].first;
    fre(i, 0, a) ar[i][0] = 0;
    fre(i, 0, b) ar[0][i] = 0;
    fre(i, 0, a)
        fre(j, 1, b)
        {
            if (j < lP[i].first) ar[i][j] = ar[i - 1][j];
            else ar[i][j] = max(ar[i - 1][j - lP[i].first] + lP[i].second, ar[i - 1][j]);
        }
    cout << ar[a][b] << endl;
    solve(a, b);
    for (char c : res) cout << c << ' ';
    return 0;
}
