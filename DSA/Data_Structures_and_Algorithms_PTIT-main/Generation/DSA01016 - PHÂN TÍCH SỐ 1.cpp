#include <string>
#include <bits/stdc++.h>

using namespace std;

void psh(const vector<int> &ar_i, vector<string> &ans)
{
    vector<int> l_ar = ar_i;
    sort(l_ar.begin(), l_ar.end(), greater<int>());
    string s = "(";
    const int size = l_ar.size() - 1;
    for(int i = 0; i < size; i++)
    {
        s += to_string(l_ar[i]);
        s += " ";
    }
    s += to_string(l_ar[size]) + ")";
    ans.push_back(s);
}

void slv(vector<int> &v, const int i, const int n, vector<string> &ans)
{
    if (!n) psh(v, ans);
    for (int j = n; j >= i; --j)
    {
        v.push_back(j);
        slv(v, j, n - j, ans);
        v.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int T;
    cin >> T;
    cin.ignore();
    xx:
    while(T--)
    {
        cin >> n;
        vector<int> ar;
        vector<string> ans;
        slv(ar, 1, n, ans);
        sort(ans.begin(), ans.end(), greater<string>());
        if(n == 10)
        {
            cout << "(10) ";
            ans.erase(ans.begin() + 40);
        }
        for(string i : ans) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
