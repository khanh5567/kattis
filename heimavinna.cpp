#include <string>
#include <iostream>
#include <string.h> 
using namespace std;

int main(){
    int num = 0; 
    char temp;
    int n, m; 

    while(cin >> n){
        cin >> temp;
        if(temp == '-'){
            cin >> m >> temp;
            num += m - n + 1;
        } else if(temp == ';'){
            num++;
        }
    }
    
    if(num == 0){
        num = 1;
    }
    
    cout << num;
    return 0;
}