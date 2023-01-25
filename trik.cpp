#include <iostream>
using namespace std;

int main(){
    int pos = 1;
    char temp;
    while(cin >> temp){
        if(pos == 1){
            if(temp == 'A') pos = 2; 
            else if (temp == 'C') pos = 3;
        } else if (pos == 2){
            if(temp == 'A') pos = 1; 
            else if (temp == 'B') pos = 3;
        } else if (pos == 3){
            if (temp == 'B') pos = 2;
            else if (temp == 'C') pos = 1;
        }
    }
    
    cout << pos;
    return 0;
}