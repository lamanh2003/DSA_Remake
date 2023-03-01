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
int ar[20];

void print()
{
    fre(i, 1, k) cout << ar[i];
    cout << ' ';
}

void solve(int i)
{
    fre(j, ar[i - 1] + 1, n - k + i)
    {
        ar[i] = j;
        if (i != k) solve(i + 1);
        else print();
    }
}

int main()
{
    faster();
    multi()
    {
        cin >> n >> k;
        solve(1);
        cout << br;
    }
    return 0;
}
