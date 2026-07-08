#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unordered_set<char> s;
    char c;
    cin >> c;
    do {
        if (c >= 'a' && c <= 'z') s.insert(c);
        cin >> c;
    } while (c != '}');
 
    cout << s.size() << "
";
    return 0;
}