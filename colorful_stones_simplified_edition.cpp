#include <bits/stdc++.h>

using namespace std;

int main() {
    string stones;
    string instructions;
    cin >> stones >> instructions;

    int p1 = 0;
    int p2 = 0;
    while (p2 < instructions.length()) {
        if (stones[p1] == instructions[p2]) {
            p1++;
        }
        p2++;
    }
    cout << p1 + 1 << endl;
    return 0;
}