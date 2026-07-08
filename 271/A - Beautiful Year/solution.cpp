#include <bits/stdc++.h>
using namespace std;
 
int checkBeauty(int n) {
    int digits[4] = {0};
    for (int i = 0; i < 4; i++) {
        digits[i] = n % 10;
        n /= 10;
    }
    // Check if all digits are distinct
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digits[i] == digits[j]) {
                return 0;
            }
        }
    }
    return 1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    while(checkBeauty(++n) == 0) continue;
    cout << n << "
";
    return 0;
}