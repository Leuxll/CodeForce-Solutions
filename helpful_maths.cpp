#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> a;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            a.push_back(s[i]);
        }
    }
    sort(a.begin(), a.end());

    string s2 = "";
    for (int i = 0; i < a.size(); i++) {
        s2 += a[i];
        if (i != a.size() - 1) {
            s2 += '+';
        }
    }
    cout << s2 << endl;
    return 0;
}