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
vector<bool> ar;
vector<vector<bool>> ans;

void check()
{
    int co = 0, rt = 0;
    fre(i, 1, n)
    {
        if (ar[i])
        {
            rt += co == k;
            co = 0;
        }
        else co++;
    }
    rt += co == k;
    if (rt == 1) ans.push_back(ar);
}

void sinh()
{
    while (true)
        frre(i, n, 0)
        {
            if (i == 0) return;
            if (ar[i] != 1)
            {
                ar[i] = true;
                check();
                break;
            }
            ar[i] = false;
        }
}

int main()
{
    faster();
    cin >> n >> k;
    ar.resize(n + 1, false);
    sinh();
    cout << ans.size() << br;
    for (vector<bool>& i : ans)
    {
        for (int j = 1; j < i.size(); ++j)
        {
            if (i[j]) cout << 'B';
            else cout << 'A';
        }
        cout << br;
    }
    return 0;
}
