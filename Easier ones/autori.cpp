#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string r = " ";
    for(int i = 0; i < s.length(); i++){
        if(i == 0 || s[i-1] == '-'){
            r += s[i];
        }
    }
    cout << r;
    return 0;
}
