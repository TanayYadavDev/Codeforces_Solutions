#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long k, n, w;
    cin >> k >> n >> w;
    long req = w * (w + 1) / 2;
    long price = req * k;
    long ans = price - n;
    ans = max(ans, 0L);
    cout << ans << '
';
    return 0;
}