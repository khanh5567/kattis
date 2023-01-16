#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n; cin >> n;
    int sum = 0, count = 0;
    for(int i = 0; i < n; i++) {
        int temp; cin >> temp;
        if(temp >= 0){
            sum += temp;
            count++;
        }
    }
    cout << setprecision(16);
    cout << sum / (count+0.0);
    return 0;
}