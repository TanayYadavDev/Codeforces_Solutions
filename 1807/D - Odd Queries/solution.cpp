#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<long long> a(n+1), pref(n+1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i-1] + a[i];
        }
 
        long long total = pref[n];
 
        while (q--) {
            long long l, r, k;
            cin >> l >> r >> k;
 
            // bahar ka sum
            long long range_sum = pref[r] - pref[l-1];
            long long outside_sum = total - range_sum;
 
            long long len = r - l + 1;
 
            // tumhari parity-based decision
            if ( (len % 2 == 0) || (k % 2 == 0) ) {
                // range contribution even
                if (outside_sum % 2 == 1) cout << "YES
";
                else cout << "NO
";
            } else {
                // range contribution odd
                if (outside_sum % 2 == 0) cout << "YES
";
                else cout << "NO
";
            }
        }
    }
    return 0;
}