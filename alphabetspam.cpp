#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int w = 0, l = 0, u = 0, s = 0;
    int len = str.size();

    for(int i = 0; i < len; i++){
        if(int(str[i]) >= 65 && int(str[i]) <= 90){
            u++;
        } 
        else if(int(str[i]) >= 97 && int(str[i]) <= 122){
            l++;
        } 
        else if(str[i] == '_'){
            w++;
        } else{
            s++;
        }
    }
    
    cout << setprecision(15);
    cout << w / (len+0.0) << endl;
    cout << l / (len+0.0) << endl;
    cout << u / (len+0.0) << endl;
    cout << s / (len+0.0) << endl;
    
    return 0;
}