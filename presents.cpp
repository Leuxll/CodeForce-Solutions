#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++) {
        int j;
        cin >> j;
        a[j - 1] = i;
    }

    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            cout << a[i] << " ";
        } else {
            cout << a[i] << endl;
        }
    }

    return 0;
}