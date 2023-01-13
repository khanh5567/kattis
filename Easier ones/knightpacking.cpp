#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    if(n%2 == 0){
        cout << "second";
    } else if (n%2 == 1){
        cout << "first";
    }
    return 0;
}
