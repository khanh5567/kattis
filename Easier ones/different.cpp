#include <iostream>
using namespace std;

int main(){
    long long n, m;
    while(cin >> n >> m){
        long long dif = n - m;
        if(dif < 0){
            cout << dif * -1 << endl;
        } else {
            cout << dif << endl; 
        }
    }
    return 0;
}