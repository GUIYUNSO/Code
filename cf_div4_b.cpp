#include <iostream>
#include <string>
#include <cstring> 
using namespace std;

int main() {
    int q;
    cin >> q;
    
    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int count_s[26] = {0};
        int count_t[26] = {0};
        
        for (int i = 0; i < n; i++) {
            count_s[s[i] - 'a']++;
        }
        
        for (int i = 0; i < n; i++) {
            count_t[t[i] - 'a']++;
        }
        
        bool same = true;
        for (int i = 0; i < 26; i++) {
            if (count_s[i] != count_t[i]) {
                same = false;
                break;
            }
        }
        
        if (same) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}