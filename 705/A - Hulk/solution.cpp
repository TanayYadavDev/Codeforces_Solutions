#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string a = "I love ";
    string b = "I hate ";
    string c = "that ";
    string d = "it";
 
    int t, n = 0;
    cin >> t;
    while (true) {
        if (n%2 == 1) {
            cout << a;
            n++;
        }
        else {
            cout << b;
            n++;
        }
 
        if (n != t) {
            cout << c;
        }
        else{
            cout << d;
            break;
        }        
    }
    return 0;
}