#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> c;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '{' && s[i] != '}' && s[i] != ' ' && s[i] != ',') {
            c.insert(s[i]);
        }
    }
    cout << c.size() << endl;
    return 0;
}