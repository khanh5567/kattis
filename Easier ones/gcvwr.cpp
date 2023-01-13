#include <iostream>
using namespace std;

int main(){
    int g, t, n, weight, total_weight = 0;
    cin >> g >> t >> n;
    double good = 0.9*(g - t);
    for (int i = 0; i < n; i++){
        cin >> weight;
        total_weight += weight;
    }
    
    cout << good - total_weight << endl;
    
    return 0;
}