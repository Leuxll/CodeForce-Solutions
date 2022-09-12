#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, char> alphabet;
    for (int i = 1; i <= 26; i++) {
        alphabet[i] = char(96 + i);
    }

    int n, k;
    cin >> n >> k;
    string res = "";

    if (n == k) {
        for (int i = 1; i <= k; i++) {
            res += alphabet[i];
        }
    } else {
        int remainder = n % k;
        int quotient = n / k;

        for (int i = 0; i < quotient; i++) {
            for (int j = 1; j <= k; j++) {
                res += alphabet[j];
            }
        }

        for (int i = 1; i <= remainder; i++) {
            res += alphabet[i];
        }

    }

    cout << res << endl;

    return 0;
}