#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    int count = 0;
 
    while (t--) {
        vector<int> a(3);
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        if (a[0] + a[1] + a[2] >= 2) {
            count++;
        }    
    }
    cout << count << '
';
    return 0;
}