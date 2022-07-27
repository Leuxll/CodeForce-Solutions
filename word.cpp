#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    for (int i =0; i< s.length(); i++) {
        if (isupper(s[i])) {
            upper += 1;
        } else {
            lower += 1;
        }
    }
    if (lower < upper) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
}