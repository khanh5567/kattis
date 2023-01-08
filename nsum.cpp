#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    while (n>0){
        int i; cin >> i;
        sum += i;
        n--;
    }
    cout << sum;
    return 0;
}
