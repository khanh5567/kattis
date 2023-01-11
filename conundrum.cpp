#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i+= 3){
        if(s[i] != 'P') count++;
        if(s[i+1] != 'E') count++;
        if(s[i+2] != 'R') count++;
    }
    cout << count;
    
    return 0;
}