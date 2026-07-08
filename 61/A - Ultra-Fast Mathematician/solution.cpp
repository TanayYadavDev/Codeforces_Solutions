#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s1, s2;
    cin >> s1 >> s2;
 
    bitset<100> a(s1);
    bitset<100> b(s2);
    
    bitset<100> c = a ^ b;
    string s = c.to_string();
 
    int n = s1.length();
    for (int i = 0; i < n; i++) {
        cout << s[100 - n + i];
    }
 
    return 0;
}