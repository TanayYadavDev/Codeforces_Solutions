#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--){
        int n, count = 0;
        cin >> n;
        int t = n;
        while (t) {
            if (t % 10 != 0) count++;
            t /= 10;
        }
        cout << count << "
";
        int m = 1;
        while (n) {
            if (n % 10 != 0) cout << (n % 10) * m << " ";
            n /= 10;
            m *= 10;
        }
        cout << "
";
    }
 
    return 0;
}