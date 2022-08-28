#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int shots;
    cin >> shots;
    for (int i = 0; i < shots; i++) {
        int wire;
        int bird;
        cin >> wire >> bird;
        wire--;
        if (wire != 0) {
            a[wire - 1] += bird - 1;
        }
        if (wire != n - 1) {
            a[wire + 1] += a[wire] - bird;
        }
        a[wire] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}