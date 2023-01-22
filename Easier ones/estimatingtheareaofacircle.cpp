#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double r, m, c;
    cout << setprecision(10);
    while(cin >> r >> m >> c){
        if(r == 0){
            break;
        }
        double square_sa = (r * 2) * (r* 2);
        double true_area = pow(r, 2) * M_PI;
        double est_area = (c / m) * square_sa;
        cout << true_area << " " << est_area << endl;

     }
    return 0;
}