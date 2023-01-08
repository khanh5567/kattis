#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int c, k;
    cin >> c >> k;
    
    double s = pow(10,k);
    double t = floor((c/s)+0.5) * s;
    
    int total = int(t);
    
    cout << total;

    return 0;
}