#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int total = 1;
    while (true) {
        if ((total * k) % 10 == r || (total * k) % 10 == 0) {
            cout << total << endl;
            return 0;
        }
        total++;
    }
}