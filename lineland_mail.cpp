#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (i != 0 && i != n - 1) {
            int minimum = min(a[i] - a[i-1], a[i+1] - a[i]);
            int maximum = max(a[i] - a[0], a[n-1] - a[i]);
            cout << minimum << " " << maximum << endl;
        } else if (i == 0) {
            int minimum = a[i+1] - a[i];
            int maximum = a[n-1] - a[i];
            cout << minimum << " " << maximum << endl;
        } else {
            int minimum = a[i] - a[i-1];
            int maximum = a[i] - a[0];
            cout << minimum << " " << maximum << endl;
        }
        
    }

    return 0;
}