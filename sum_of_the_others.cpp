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

    string line;
    int answer;

    while(std::getline(cin, line)) {
        stringstream ss(line);
        int num;
        int position = 0;
        int i = 0;
        while (true) {
            int sum = 0; 
            while (ss >> num) {
                if (i != position) {
                    sum+=num;
                } else {
                    answer = num;
                }
                i++;
            }
            if (sum == answer) {
                cout << answer << endl;
                break;
            }
            position++;
        }
        
    }
    return 0;
}