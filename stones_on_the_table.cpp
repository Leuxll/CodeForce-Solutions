#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    int p1 = 0;
    int p2 = 1;
    int counter = 0;
    while (p2 < n) {
        if (a[p1] == a[p2]) {
            counter++;
        }
        p1++;
        p2++;
    }
    cout << counter << endl;
    return 0;
}