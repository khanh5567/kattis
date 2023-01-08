#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        sum += pow(temp/10, temp%10);
    }

    cout << sum;
    return 0;
}
