#include <iostream>
using namespace std;

int main(){
    string s; 
    getline(cin, s);
    int temp, b = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            temp = i;
        }
    }
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '(' && s[i] != ')' && i < temp){
            b++;
        }else if(s[i] != '(' && s[i] != ')' && i > temp){
            b--;
        }
    }

    if(b == 0){
        cout << "correct";
    } else{
        cout << "fix";
    }
    return 0;
}