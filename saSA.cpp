#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
        
        int sum_a = 0;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            sum_a += num;
        }
        
        if (sum_a <= s && (s - sum_a) % x == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}