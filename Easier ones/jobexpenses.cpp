#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int expense = 0;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(temp < 0){
            expense += (temp * -1);
        }
    }
    cout << expense;
    return 0;
}