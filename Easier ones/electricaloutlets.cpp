#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int k, sum = 0; cin >> k;
        for(int j = 0; j < k; j++){
            int temp;
            cin >> temp;
            sum += temp;
        }
        cout << sum - (k-1) << endl;
    }
    return 0;
}