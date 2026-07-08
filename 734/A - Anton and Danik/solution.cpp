#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n;
    cin >> n;
    string s;
    cin >> s;
 
    long long c = 0;
    for (long long i = 0; i < n; i++) {
        if (s[i] == 'A') {
            c++;
        }
        else if (s[i] == 'D') {
            c--;
        }
    }
    if (c > 0) {
        cout << "Anton" << endl;
    }
    else if (c < 0) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
 
    return 0;
}