#include <iostream>
using namespace std;

int convert(char& c);
int getvalue(char c, int n);

int main() {
  char c; int n, sum = 0;
  cin >> n >> c;
  int base = convert(c);
  for(int i = 0; i < n*4; i++){
      char temp; int d;
      cin >> c >> temp;
      int suit = convert(temp);
      if(suit == base){
          d = 0;
      } else if (suit < base || suit > base){
          d = 1;
      }
      sum += getvalue(c, d);
  }
  cout << sum;
  return 0;
}

int convert(char& c){
    
    if(c == 'S'){
       return 4;
    } else if(c == 'H'){
       return 3;
    } else if(c == 'D'){
       return 2;
    } else if(c == 'C'){
       return 1;
    }
    
    return 0;
    
}

int getvalue(char c, int n){
    int value[2][8] = {{11,4,3,20,10,14,0,0},{11,4,3,2,10,0,0,0}};
    char desc[8] = {'A','K','Q','J','T','9','8','7'};
    for(int i = 0; i < sizeof(desc); i++)                   
    {
        if(c == desc[i]){ 
          return value[n][i];
        }
    }
    return 0;
}
