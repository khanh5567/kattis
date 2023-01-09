#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double cost; cin >> cost;
    int n; cin >> n;
    double sum = 0;
    cout << fixed;
    cout << setprecision(7);
    for(int i = 0; i < n; i++){
        double l, w; cin >> l >> w;
        double area = l * w;
        double w_cost = area * cost;
        sum += w_cost;
    }
    cout << sum;
    return 0;
}