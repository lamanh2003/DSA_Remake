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


int n, k, ar[20] = {};

void print()
{
    fre(i,1,n) cout << ar[i];
    cout << endl;
}
 
void solve(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        ar[i] = j;
        if(i != n)
            solve(i + 1);
        else
        {
            int sm = 0;
            fre(k, 1, n) sm += ar[k];
            if (sm == k) print();
        }
    }
}

int main()
{
    multi()
    {
        cin >> n >> k;
        solve(1);
    }
    return 0;
}