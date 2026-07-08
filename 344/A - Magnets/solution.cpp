#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, grp = 1;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i-1 >= 0 && a[i-1][1] == a[i][0]) {
            grp++;
        }
    }
 
    cout << grp << "
";
 
    return 0;
}