#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<string>> ar(15);
    ar[1].push_back("0");
    ar[1].push_back("1");
    for(int i=2;i<=10;i++)
    {
        for(int j=0;j<ar[i - 1].size();j++) 
            ar[i].push_back('0' + ar[i - 1][j]);
        for(int j=ar[i - 1].size() - 1;j>=0;j--) 
            ar[i].push_back('1' + ar[i - 1][j]);
    }
    string s;
    int T;
    cin >> T;
    while(T--)
    {
        cin >> s;
        int idx = 0;
        for(int i=s.size() - 1;i>=0;i--)
            if (s[i] == '1') 
                idx += 1 << s.size() - i - 1;
        cout << ar[s.size()][idx] << '\n';
    }
    return 0;
}
