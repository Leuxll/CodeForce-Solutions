#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int total_time = n / k * t;
    if (total_time <= d) {
        cout << "NO" << endl;
        return 0;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}