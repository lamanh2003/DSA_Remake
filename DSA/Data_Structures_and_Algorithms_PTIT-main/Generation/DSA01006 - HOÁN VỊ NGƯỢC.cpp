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


bool check[20] = {};
int n, ar[20] = {};

void print()
{
    frre(i, n, 0) cout << ar[i];
    cout << ' ';
}

void solve(int i)
{
    frre(j, n, 0)
        if (!check[j])
        {
            ar[i] = j;
            check[j] = true;
            if (i != 1) solve(i - 1);
            else print();
            check[j] = false;
        }
}

int main()
{
    multi()
    {
        cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}
