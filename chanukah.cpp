#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int temp, d;
    for(int i = 0; i < n; i++){
        int sum = 0;
        cin >> temp >> d;
        for(int j = 0; j < d; j++){
            sum += j+2;
        }
        cout << temp << " " << sum << endl;
    }

    return 0;
}
