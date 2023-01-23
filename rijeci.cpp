#include <iostream>
using namespace std;

int main() {
  int n1 = 0, n2 = 1, n3, n;
  cin >> n;
  if(n == 1){
      cout << n1 << " " << n2;
  } else {
      for (int i = 2; i < n+1; ++i) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if(i == n){
            cout << n1 << " " << n2;
        }
      }
  }
  return 0;
}