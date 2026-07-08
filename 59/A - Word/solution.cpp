#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
 
    int lc=0, uc=0;
    for (char c : s) {
        if (islower(c)) lc++;
        else uc++;
    }
    if(lc < uc) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << "
";
    return 0;
}