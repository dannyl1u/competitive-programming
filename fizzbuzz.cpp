#include "/Users/dannyliu/Desktop/comp_programming/bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ifstream cin("test.in"); 

    int x, y, n;
  cin >> x >> y >> n;
  // cout << x <<" "<< y << " " << n<<endl;
    // cout << x <<" "<< y << " " << n;
  for (int i = 1; i <= n; i++) {
    if (i % x == 0 && i % y == 0) {
      cout << "FizzBuzz" << endl;
    }
    else if (i % y == 0) {
      cout << "Buzz" << endl;
    }
    else if (i % x == 0) {
      cout << "Fizz" << endl;
    }
    else {
      cout << i << endl;
    }
  }

    

    return 0;
}