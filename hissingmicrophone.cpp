#include <iostream>
using namespace std;

int main(){
    string s; 
    cin >> s;
    bool hiss = false;
    for(int i = 0; i < s.length(); i++){
        if(i != s.length() - 1 && s[i] == 's' && s[i+1] == 's'){
                cout << "hiss";
                hiss = true;
                break;
        } 
    }
    
    if(!hiss){
        cout << "no hiss";
    }
    
    return 0;
}