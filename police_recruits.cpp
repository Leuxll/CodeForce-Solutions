#include <bits/stdc++.h>

using namespace std;

int main() {
    int events;
    cin >> events;
    int hire = 0;
    int untreated = 0;
    for (int i = 0; i < events; i++) {
        int n;
        cin >> n;
        if (n != -1) {
            hire += n;
        } else {
            if (hire == 0) {
                untreated++;
            } else {
                hire--;
            }
        }
    }
    cout << untreated << endl;
    return 0;
}