#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;
    int total = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= b) {
            total += x;
            if (total > d) {
                c++;
                total = 0;
            }   
        }
    }
    cout << c << endl;
    return 0;
}