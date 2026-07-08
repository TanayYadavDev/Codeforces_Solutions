#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    vector <vector <int>> a(5, vector <int>(5));
    int curr_i, curr_j;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                curr_i = i;
                curr_j = j;
            }
        }
    }
    int ans = abs(curr_i - 2) + abs(curr_j - 2);
    cout << ans << '
';
    return 0;
}