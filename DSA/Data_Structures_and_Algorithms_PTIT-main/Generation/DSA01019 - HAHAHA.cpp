#include <bits/stdc++.h>

using namespace std;

void solve(int i);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1, n, k, x;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        while (s.back() == '0')
        {
            s.back() = '1';
            s.pop_back();
        }
        if (s.empty())
        {
            cout << string(s.length() + 1, '1');
        }
        else
        {
            s.back() = '0';
            cout << s;
        }
        cout << endl;
    }
    return 0;
}

void solve(int i)
{
    const vector<char> a{'A', 'H'};
    static vector<char> vc;
    if (vc.size() == 0)
    {
        vc.push_back('H');
    }
    while (vc.size() < i + 1)
    {
        vc.push_back(' ');
    }
    for (char c : a)
    {
        if (vc[i - 1] == 'H' && c == 'A')
        {
            continue;
        }
        vc[i] = c;
        if (i == vc.size() - 2)
        {
            for (int j = 1; j < vc.size(); j++)
            {
                cout << vc[j];
            }
            cout << endl;
        }
        else
        {
            solve(i + 1);
        }
    }
}
