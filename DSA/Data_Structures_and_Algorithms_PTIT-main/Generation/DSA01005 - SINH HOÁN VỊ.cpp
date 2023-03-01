#include <bits/stdc++.h>
using namespace std;

bool u[20] = {};
int n, a[20] = {};

void p()
{
    for(int i=1; i<=n; i++) cout << a[i];
    cout << ' ';
}

void s(int pos)
{
    for(int i=1; i<=n; i++)
        if (!u[i])
        {
            a[pos] = i;
            u[i] = true;
            if (pos != n) s(pos + 1);
            else p();
            u[i] = false;
        }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    xx:
        while(t--)
        {
            cin >> n;
            s(1);
            cout << '\n';
        }
    return 0;
}
