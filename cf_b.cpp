#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        ll dp1 = 0, dp2 = 0; // dp1 for x=1, dp2 for x=-1
        for (int i = 0; i < n; i++) 
        {
            ll ndp1 = -1e18, ndp2 = -1e18;
            // x_i = 1
            // from p=1: same sign → red
            ndp1 = max(ndp1, dp1 + (-a[i]));
            // from p=-1: opposite → blue
            ndp1 = max(ndp1, dp2 + b[i]);
            
            // x_i = -1
            // from p=1: opposite → blue
            ndp2 = max(ndp2, dp1 + (-b[i])); // x_i*b_i = -1*b_i = -b_i
            // from p=-1: same → red
            ndp2 = max(ndp2, dp2 + a[i]); // x_i*(-a_i) = (-1)*(-a_i) = a_i
            
            dp1 = ndp1;
            dp2 = ndp2;
        }
        cout << dp1 << "\n"; // x_n = 1
    }
    return 0;
}