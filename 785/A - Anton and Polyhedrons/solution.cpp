#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n;
    cin >> n;
 
    unordered_map <char, int> mp;
    mp['T'] = 4;
    mp['C'] = 6;
    mp['O'] = 8;
    mp['D'] = 12;
    mp['I'] = 20;
 
    int count = 0;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        count += mp[s[i][0]];
    }
 
    cout << count;
    return 0;
}