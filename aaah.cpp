#include <iostream>
using namespace std;

int main(){
    string s, d;
    cin >> s >> d;
    if(s.length() >= d.length()){
        cout << "go";
    }else {
        cout << "no";
    }
    return 0;
}