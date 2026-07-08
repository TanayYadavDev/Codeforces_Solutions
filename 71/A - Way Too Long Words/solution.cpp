#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (n <= 10) {
            cout << s << '
';
            continue;
        }
        else {
            cout << s[0] << n-2 << s[n - 1] << '
';
        }
    }
    return 0;
}