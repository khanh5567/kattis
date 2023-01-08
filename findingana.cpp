#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int temp;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='a'){
            temp = i;
            break;
        }
    }
    for(int j = temp; j < s.length(); j++){
        cout << s[j];
    }
    return 0;
}
