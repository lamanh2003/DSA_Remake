#include<bits/stdc++.h>
using namespace std;

int n, k;
bool f[20];
vector<int> ar, v;
int cnt = 0;
bool ok;

bool check()
{
    return ar == v;
}

void solve(int i)
{
    if(ok) return;
    for(int j = v[i - 1] + 1; j <= n - k + i; ++j)
    {
        v[i] = j;
        if(i == k)
        {
            ++cnt;
            if(check())
            {
                ok = 1;
                return;
            }
        }
        else solve(i + 1);
        if(ok) return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
    {
        ok = 0;
        cnt = 0;
        cin >> n >> k;
        ar.resize(n + 1);
        v.resize(n + 1);
        memset(f, 0, sizeof(f));
        for(int i = 1; i <= k; ++i) cin >> ar[i];
        solve(1);
        cout << cnt << endl;
    }
    return 0;
}
