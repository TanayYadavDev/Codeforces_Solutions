#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s, t;
    cin >> s >> t;
 
    int n = s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    cout << (s < t ? -1 : s > t ? 1 : 0) << '
';
    
    return 0;
}