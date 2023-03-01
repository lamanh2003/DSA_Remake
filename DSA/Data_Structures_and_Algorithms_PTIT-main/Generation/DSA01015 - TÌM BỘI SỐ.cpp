#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<long long> v1;
    long long v2 = 9;
    v1.push_back(v2);
    while (v2 * 10 <= 9000000999999)
    {
        const int v3 = v1.size();
        v2 *= 10;
        v1.push_back(v2);
        for(int i = 0; i < v3; i++) {
            v1.push_back(v2 + v1[i]);
        }
    }
    int v4;
    int v5;
    cin >> v5;
    cin.ignore();
    while(v5--)
    {
        cin >> v4;
        int v6 = 0;
        while (v1[v6] % v4) {
            v6++;
        }
        cout << v1[v6] << "\n";
    }
    return 0;
}
