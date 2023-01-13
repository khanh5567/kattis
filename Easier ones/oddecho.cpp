#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string temp;
        cin >> temp;
        if(i%2!=0){
            cout << temp << endl;
        }
    }
    return 0;
}
