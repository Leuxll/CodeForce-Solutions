#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int moves = 0;
    int curr = 0;
    for (int i = 0; i < s.length(); i++) {
        int index = s[i] - 97;
        int walk = abs(curr - index);
        if (walk < 13) {
            moves += walk;
        } else {
            moves += 26 - walk;
        }
        curr = index;
    }
    cout << moves << endl;
    return 0;
}