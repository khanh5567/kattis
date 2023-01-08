#include <iostream>
#include <string>
using namespace std;

int main(){
    string f, s, temp = "";
    getline(cin, f); getline(cin, s);
    int index;
    for(int i = 0; i <= s.length(); i++){
        if(i % 3 == 0 && i != 0){
            temp = s.substr(i-3, 3);
            index = stoi(temp);
            cout << f[index-1];
        }
    }
    return 0;
}
