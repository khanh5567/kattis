#include <iostream>
using namespace std;

int main(){
    bool dup = false;
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(i != s.length() - 1){
            for(int j = i+1; j < s.length(); j++){
                if(s[i] == s[j]){
                    dup = true;
                }
            }
        }
    }
    
    
    if (dup){
        cout << 0;
    } else {
        cout << 1;
    }
    
    return 0;
}