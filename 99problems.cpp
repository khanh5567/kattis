#include <iostream>
using namespace std;

int main(){
    int n, upper = 0, lower = 0; 
    cin >> n;
    
    for(int i = 0; i < 10000; i++){
        int temp = n + i;
        if(temp % 100 == 99 && temp >= 0){
            upper = i;
            break;
        } 
    }
    
    for(int i = 0; i < 10000; i++){
        int temp = n - i;
        if(temp % 100 == 99 && temp >= 0){
            lower = i;
            break;
        }
    }
    
    if(upper == lower || upper < lower || (lower == 0 && upper > lower)){
        cout << n+upper;
    } else if (lower < upper){
        cout << n-lower;
    } 
    
    return 0;
}