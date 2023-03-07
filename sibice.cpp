#include "/Users/dannyliu/Desktop/comp_programming/bits/stdc++.h"
#include <iostream>
#include <string> 
#include <fstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ifstream cin("test.in"); 

    string str;
    getline(cin, str);
    stringstream ss(str);

    int N, W, H;
    ss >> N >> W >> H;

    double match_length = sqrt(W*W + H*H);
    // cout << match_length << endl;

    while(std::getline(cin, str)) {
        // cout << str << endl;
        if (stoi(str) > match_length) {
            cout << "NE" << endl;
        } else {
            cout << "DA" << endl;
        }
    }
    return 0;
}