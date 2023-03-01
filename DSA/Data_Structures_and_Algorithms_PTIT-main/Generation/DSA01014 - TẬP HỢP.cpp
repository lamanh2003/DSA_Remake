#include <bits/stdc++.h>
using namespace std;

int var1, var2, var3, var4;
bool arr1[25];
vector<int> vec1;

void func1(const int i, const int cur = 0)
{
    if (i > var2)
    {
        var4 += cur == var3;
        return;
    }
    for (int j = vec1[i - 1] + 1; j <= var1; j++)
        if (!arr1[j])
        {
            vec1.push_back(j);
            arr1[j] = true;
            func1(i + 1, cur + j);
            vec1.pop_back();
            arr1[j] = false;
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (true)
    {
        var4 = 0;
        cin >> var1 >> var2 >> var3;
        if (var1 == 0 && var2 == 0 && var3 == 0) return 0;
        vec1.push_back(0);
        func1(1);
        cout << var4 << '\n';
        vec1.clear();
    }
}
