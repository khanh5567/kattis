#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, sum = 0; cin >> n;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        sum += temp;
    }
    
    for(int i = 0; i < n-1; i++){
        int temp; cin >> temp;
        sum -= temp;
    }

    cout << sum;
    return 0;
}