#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s, t;
    cin >> s >> t;
 
    int n = s.size();
    int m = t.size();
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }
    int i = 0, j = n-1;
    while (i < n && j >= 0) {
        if (s[i++] != t[j--]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
 
    return 0;
}