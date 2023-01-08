#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'e'){
            sum++;
        }
    }
    sum = sum * 2;
    cout << 'h';

    while (sum > 0) {
        cout << 'e';
        sum--;
    }
    cout << 'y';
    return 0;
}
