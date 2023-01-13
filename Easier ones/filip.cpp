#include <iostream>
using namespace std;

int convert(int n){
    return (n%10) * 100 + ((n % 100) / 10) * 10 + ((n%1000) / 100);
}
int main(){
    int n, m;
    cin >> n >> m;
    int new_n = convert(n), new_m = convert(m);
    if(new_n > new_m){
        cout << new_n;
    } else {
        cout << new_m;
    }
    return 0;
}

