#include <iostream>
#include <vector>
using namespace std;

int getSum(int n);
int main(){
   int lower, upper, total;
   vector<int> list;
   cin >> lower >> upper >> total;
   for(int i = lower; i <= upper; i++){
       if(getSum(i) == total){
           list.push_back(i);
       }
   }
   int n = list.front();
   int m = list.back();
   cout << n << endl << m;
   return 0;
}

int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }