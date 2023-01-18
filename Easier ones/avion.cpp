#include <iostream>
using namespace std;

int main(){
    const int NUM = 5;
    bool found = false;
    for(int i = 1; i <= NUM; i++){
        string s; 
        cin >> s;
        if(s.find("FBI") != string::npos){
            cout << i << endl;
            found = true;
        }
    }
    
    if(!found){
        cout << "HE GOT AWAY!";
    }
    return 0;
}