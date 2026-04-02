#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        vector<bool> wake(n, false);
        
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == '1') 
            {
                wake[i] = true;
                for (int j = 1; j <= k && i + j < n; j++) 
                {
                    wake[i + j] = true;
                }
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) 
        {
            if (!wake[i]) 
            {
                ans++;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}