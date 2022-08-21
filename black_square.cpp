#include <bits/stdc++.h>

using namespace std;

int main() {

    map<char, int>numbers;
    numbers['1'] = 1;
    numbers['2'] = 2;
    numbers['3'] = 3;
    numbers['4'] = 4;
    numbers['5'] = 5;
    numbers['6'] = 6;
    numbers['7'] = 7;
    numbers['8'] = 8;
    numbers['9'] = 9;


    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    
    int total = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        total += a[numbers[s[i]] - 1];
    }

    cout << total << endl;

    return 0;
}