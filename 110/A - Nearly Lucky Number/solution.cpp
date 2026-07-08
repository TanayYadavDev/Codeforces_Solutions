#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n, count = 0;
    cin >> n;
    while (n) {
        int d = n % 10;
        n /= 10;
        if (d == 4 || d == 7) {
            count++;
        }
    }
    if (count == 0) {
        cout << "NO
";
        return 0;
    }
    while (count) {
        int d = count % 10;
        count /= 10;
        if (d != 4 && d != 7) {
            cout << "NO
";
            return 0;
        }
    }
    cout << "YES
";
    return 0;
}