#include <iostream>
using namespace std;

int main(){
    int e, f, c, counter = 0;
    cin >> e >> f >> c;
    int total = e + f;
    while((total / c) > 0){
        counter += total / c;
        total = (total / c) + (total % c);
    }
    cout << counter;
    return 0;
}