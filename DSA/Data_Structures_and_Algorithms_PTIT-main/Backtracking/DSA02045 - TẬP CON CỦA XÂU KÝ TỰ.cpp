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
string s;
char a[20];
bool check[20];

void print(int j)
{
    for(int i = 1; i <= j; ++i) cout << a[i];
    cout << ' ';
}

void solve(int i, int cur = 1)
{
    for(int j = i; j <= n; ++j)
    {
        a[cur] = s[j];
        if(!check[j])
        {
            check[j] = 1;
            print(cur);
            solve(j + 1, cur + 1);
            check[j] = 0;
        }
    }
}

int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--)
    {
        memset(check, 0, 20);
        cin >> n >> s;
        s = "0" + s;
        solve(1);
        cout << endl;
    }
    return 0;
}
