#include <iostream>
using namespace std;

int main(){
    int n, r, e, c; cin >> n;
    for(int i = 0; i < n; i++){
        int profit;
        cin >> r >> e >> c;
        profit = e - r;
        if(profit > c){
            cout << "advertise" << endl;
        } else if (profit == c){
            cout << "does not matter" << endl;
        } else {
            cout << "do not advertise" << endl;
        }
    }
    return 0;
}