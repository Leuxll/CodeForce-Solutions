#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    string s;
    cin >>s;
    map<char, int> m;
    for (int i = 0; i<s.length(); i++){
        m[s[i]] += 1;
    }
    if (m.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}