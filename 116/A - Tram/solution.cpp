#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, max = 0, curr = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        curr += b - a;
        if (curr > max) max = curr;
    }
 
    cout << max << "
";
    return 0;
}