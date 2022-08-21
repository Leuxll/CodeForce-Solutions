#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool p = true;
    int left = 0;
    int right = n-1;
    int sereja = 0;
    int dima = 0;
    while (left <= right) {
        if (p && a[left] <= a[right]) {
            sereja += a[right];
            right--;
        } else if (p && a[left] > a[right]) {
            sereja += a[left];
            left++;
        } else if (!p && a[left] <= a[right]) {
            dima += a[right];
            right--;
        } else if (!p && a[left] > a[right]) {
            dima += a[left];
            left++;
        }
        if (p) {
            p = false;
        } else {
            p = true;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}