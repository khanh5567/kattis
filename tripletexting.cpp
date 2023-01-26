#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();
    int wordLen = len / 3;
    string v[3] = {};
    for(int i = 0; i < 3; i++){
        v[i] = s.substr(i * wordLen, wordLen);
    }
    
    if(v[0] == v[1] || v[0] == v[2]){
        cout << v[0];
    } else if (v[1] == v[2]){
        cout << v[1];
    }
    return 0;
}