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



int main()
{
    faster();
    int n, k;
    int ar[1005];
    multi()
    {
        cin >> n >> k;
        fre(i, 1, k) cin >> ar[i];
        int tmp = k;
        while(ar[tmp] == n - k + tmp) tmp--;
        if(tmp > 0)
        {
            ar[tmp]++;
            fre(i, tmp + 1, k) ar[i] = ar[i - 1] + 1;
            fre(i, 1, k) cout << ar[i] << ' ';
        }
        else fre(i, 1, k) cout << i << ' ';
        cout << br;
    }
    return 0;
}
