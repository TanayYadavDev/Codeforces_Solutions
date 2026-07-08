#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, h;
    cin >> n >> h;
    int w = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        w = w + (a[i] > h ? 2 : 1);
    }
    cout << w << "
";
 
    return 0;
}