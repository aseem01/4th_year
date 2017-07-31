#include <iostream>
#include <string>

using namespace std;

int main() {
  int a = 0, b = 1, temp, n;
  cin >> n;
    for ( int index = 1; index < n; index++) {
        temp = b;
        b = (b + a)%10;
        a = temp%10;
    }
  cout << b;
}
