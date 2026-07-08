#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; string s;
    cin >> n >> s;
    if(n < 26) {
        cout << "NO" << endl;
    }
    else {
        unordered_set<char> st;
        for(int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
            st.insert(s[i]);
        }
        if (st.size() == 26) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}