#include <iostream>
using namespace std;

int main(){
  int n; cin >> n;
  for(int i = 0; i < n; i++){
      int t; cin >> t;
      if(t % 2 != 0){
          cout << t << " is odd" << endl;
      } else {
          cout << t << " is even" << endl;
      }
  }
  return 0;
}
