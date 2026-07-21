#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int h[n], a[n];
    for (int i = 0; i < n; i++) cin >> h[i] >> a[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (h[i] == a[j]) ans++;
        }
    }
    cout << ans << "
";
 
    return 0;
}