#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n;
    cin >> n;
    long long ans = (n % 2 == 0) ? n / 2 : (-1)* (n + 1) / 2;
    cout << ans << "
";
 
    return 0;
}