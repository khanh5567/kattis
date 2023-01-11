#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; cin >> n;
    float b, p, bpm, min_abpm, max_abpm, t;
    cout << fixed;
    cout << setprecision(4);
    for(int i = 0; i < n; i++){
        cin >> b >> p;
        bpm = 60 * b / p;
        t = 60 / p;
        min_abpm = bpm - t;
        max_abpm = bpm + t;
        cout << min_abpm << " " << bpm << " " << max_abpm << endl;
    }
    return 0;
}