#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // 只需处理首尾
        if (a[0] == -1 && a[n-1] == -1) {
            a[0] = a[n-1] = 0;
        } else if (a[0] == -1) {
            a[0] = a[n-1];
        } else if (a[n-1] == -1) {
            a[n-1] = a[0];
        }
        
        // 计算 S
        int S = abs(a[n-1] - a[0]);
        
        // 其他位置填 0（字典序最小）
        for (int i = 0; i < n; i++) {
            if (a[i] == -1) a[i] = 0;
        }
        
        // 输出
        cout << S << "\n";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n-1];
        }
    }
    
    return 0;
}