#include <iostream>
using namespace std;

int main(){
    int sum = 0, a, b, c, d, winner;
    for(int i = 0; i < 5; i++){
        int temp_sum;
        cin >> a >> b >> c >> d;
        temp_sum = a + b + c + d;
        if(temp_sum >= sum){
            sum = temp_sum;
            winner = i+1;
        }
    }
    cout << winner << " " << sum;
    return 0;
}
