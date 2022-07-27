#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    int A = 0;
    int D = 0;
    cin >> str;
    for(int i = 0; i < n; i++) {
        if (str[i] == 'A') {
            A++;
        } else {
            D++;
        }
    }
    if (A > D) {
        cout << "Anton";
    } else if (D> A) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    return 0;
}