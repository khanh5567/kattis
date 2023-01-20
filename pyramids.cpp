#include <iostream>
#include <cmath>
using namespace std;

int countBlocks(int n){
    if(n > 1){
        return pow(n+(n-1), 2) + countBlocks(n-1);
    } else {
        return 1;
    }
    
}
int main(){
    int n; 
    cin >> n;
    
    for(int i = 0; i < 9999; i++){
        if(n <= countBlocks(i)){
            if (n < countBlocks(i)){
                cout << i - 1;
            } else {
                cout << i;
            }
            break;
        }
    }
    return 0;
}
