#include "./bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ifstream cin("test.in"); 

    int x, y;
    cin >> x;
    cin >> y;
    
    // quadrant 2, 3
    if (x < 0) {
        if (y < 0) {
            cout << "3" << endl;
        }
        else {
            cout << "2" << endl;
        }
    }
    // quadrant 1, 4
    else {
        if (y < 0) {
            cout << "4" << endl;
        }
        else {
            cout << "1" << endl;
        }
    }

    return 0;
}