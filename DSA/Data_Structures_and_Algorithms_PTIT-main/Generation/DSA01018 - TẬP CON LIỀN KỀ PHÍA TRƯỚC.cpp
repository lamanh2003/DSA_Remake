#include <bits/stdc++.h>
using namespace std;

int nums[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int numCases;
    cin >> numCases;
    while(numCases--) {
        int n, k;
        cin >> n >> k;
        for(int i = 1; i <= k; i++) {
            cin >> nums[i];
        }
        int index = k;
        while(index && nums[index - 1] + 1 == nums[index]) {
            index--;
        }
        if(index) {
            nums[index]--;
            for(int i = index + 1; i <= k; i++) {
                nums[i] = n - k + i;
            }
            for(int i = 1; i <= k; i++) {
                cout << nums[i] << ' ';
            }
        } else {
            for(int i = n - k + 1; i <= n; i++) {
                cout << i << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
