#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dif = 0;
    string s, d; 
    cin >> s >> d;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != d[i]){
            dif++;
        }
    }
    cout << pow(2, dif);
    return 0;
}
