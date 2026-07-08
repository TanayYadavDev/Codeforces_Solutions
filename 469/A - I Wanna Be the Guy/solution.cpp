#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    unordered_set<int> st;
 
    int p;
    cin >> p;
    int x[p];
    for(int i = 0; i < p; i++) {
        cin >> x[i];
        st.insert(x[i]);
    }
    int q;
    cin >> q;
    int y[q];
    for (int i = 0; i < q; i++) {
        cin >> y[i];
        st.insert(y[i]);
    }
 
    if (st.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
 
    return 0;
} 