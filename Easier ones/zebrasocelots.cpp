#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char zoo[n]{' '}, temp;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        zoo[i] = (temp == 'Z') ? '0' : '1';
    }
    
    zoo[n] = '\0';
    printf("%ld", strtol(zoo, NULL, 2));
    
    return 0;
}  

