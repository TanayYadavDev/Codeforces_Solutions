#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_idx = 0, min_idx = 0;
    for (int i = 1; i < n; i++) {
        max_idx = (arr[i] > arr[max_idx]) ? i : max_idx;
        min_idx = (arr[i] <= arr[min_idx]) ? i : min_idx;
    }
    int count = 0;
    count += max_idx; // moves to the front
    count += (n - 1 - min_idx); // moves to the back
    if (max_idx > min_idx) count--;
    cout << count << "
";
    return 0;
}