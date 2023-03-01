#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
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
        if (s.empty()) cout << string(s.length() + 1, '1');
        else
        {
            s.back() = '0';
            cout << s;
        }
        cout << endl;
    }
    return 0;
}
