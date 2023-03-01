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


int n, ar[15] = {};

void print()
{
    fre (i,1,n) cout << static_cast<char>(ar[i] + 'A' - 1);
    cout << ' ';
}
 
void solve(int i)
{
    fre(j,1,2)
    {
        ar[i] = j;
        if(i != n) solve(i + 1);
        else print();
    }
}

int main()
{
    multi()
    {
        cin >> n;
        solve(1);
        cout << br;
    }
    return 0;
}
