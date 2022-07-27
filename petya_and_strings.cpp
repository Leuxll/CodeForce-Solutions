#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    if (strncasecmp(s1.c_str(), s2.c_str(), s1.length()) < 0) {
        cout << -1;
    } else if (strncasecmp(s1.c_str(), s2.c_str(), s1.length()) > 0) {
        cout << 1;
    } else {
        cout << 0;
    }
}