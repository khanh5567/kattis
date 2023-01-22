#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, sum = 0, curr, next;
    cin >> n;
    if(n % 2 != 0){
        cout << "still running";
    } else {
        for(int i = 1; i <= n; i+=2){
            cin >> curr >> next;
            sum += next - curr;
            
        }
        cout << sum;
    }

    return 0;
}