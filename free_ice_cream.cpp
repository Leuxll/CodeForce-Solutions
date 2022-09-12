#include <bits/stdc++.h>

using namespace std;

int main() {

    double n, x;
    cin >> n >> x;
    
    int k = 0;

    for (int i = 0; i < n; i++) {
        char op;
        double y;
        cin >> op >> y;
        if (op == '+') {
            x += y;
        } else if (op == '-' && y > x) {
            k++;
        } else if (op == '-') {
            x -= y;
        }
    }
    
    cout.precision(0);
    cout << fixed << x << ' ' << k << endl;

    return 0;
}