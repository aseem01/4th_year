#include <iostream>
using namespace std;

int addNum(int n);

int main() {
   int n;

   // prompt user to input numbers
   cout << "Please enter in values to add together: ";
   cin >> n;

   cout << addNum(n);

   // pause and exit
  // getchar();
   //getchar();
   return 0;
}

// function
int addNum(int n) {
   int arr[99] = {};
   for(int i=1;i<=n;i++) arr[i-1]=i;
   int sum = 0;

   for (int i = 0; i < n; i++) {
      sum = sum + arr[i];
   }
   return sum;
}
