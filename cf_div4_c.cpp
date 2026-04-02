#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int odd_cnt = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 != 0) {
                ++odd_cnt;
            }
        }

        if (odd_cnt == 0 || odd_cnt == n) {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
        } else {
            sort(a.begin(), a.end());
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}