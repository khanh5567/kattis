#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int vol = 7;
    string up = "Skru op!";
    string down = "Skru ned!";
    for(int i = 0; i <= n; i++){
        string temp; getline(cin, temp);
        if(temp == up && vol != 10){
            vol++;
        }else if (temp == down && vol != 0){
            vol--;
        }
        
    }
    cout << vol;
    return 0;
}