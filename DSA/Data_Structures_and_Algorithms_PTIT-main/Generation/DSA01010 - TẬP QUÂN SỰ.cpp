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
    multi()
    {
        cin >> n >> k;
        int ar[k + 1], cr[k + 1];
        fre(i, 1, k)
        {
            cin >> cr[i];
            ar[i] = cr[i];
        }
        int idx = k;
        while (idx > 0 && ar[idx] == n - k + idx) idx--;
        if (idx < 1)
            cout << k << br;
        else
        {
            int co = 0;
            ar[idx]++;
            fre(i, idx + 1, k) ar[i] = ar[i - 1] + 1;
            fre(i, idx + 1, k)
                fre(j, idx + 1, k)
                    if (ar[i] == cr[j]) co++;
            if (co == k) co = 0;
            cout << k - co << br;
        }
    }
    return 0;
}
