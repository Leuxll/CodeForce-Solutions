#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    int prev;
    cin >> prev;
    for (int i =1; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr != prev) {
            count++;
            prev = curr;
        }
    }
    cout << count;
    return 0;
}