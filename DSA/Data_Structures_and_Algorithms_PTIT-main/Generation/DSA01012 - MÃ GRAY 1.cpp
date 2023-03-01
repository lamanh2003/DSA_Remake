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
    int n;
    multi()
    {
        cin >> n;
        int t = pow(2, n);
        t >>= 1;
        vector<string> s(pow(2, n));
        while (t)
        {
            fr(i, 0, t) s[i] += "0";
            const int tmp = t * 2;
            fr(i, t, tmp) s[i] += "1";
            t >>= 1;
        }
        t = pow(2, n);
        t >>= 1;
        int mv = 1;
        while (t != 1)
        {
            string tmp = "";
            fr(i, 0, t) tmp += s[i][mv];
            int co = pow(2, n) / t - 1;
            int k = t;
            while (co--)
            {
                if (co & 1)
                {
                    int j = 0;
                    fre(i, k, k + tmp.length() - 1)
                    {
                        s[i] += tmp[j];
                        j++;
                    }
                }
                else
                {
                    int j = tmp.length() - 1;
                    fre(i, k, k + tmp.length() - 1)
                    {
                        s[i] += tmp[j];
                        j--;
                    }
                }
                k += tmp.length();
            }
            t >>= 1;
            mv++;
        }
        for (string i : s) cout << i << ' ';
        cout << br;
    }
    return 0;
}
