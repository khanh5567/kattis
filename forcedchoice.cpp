#include <iostream>
using namespace std;

int main(){
    int n, secret, step;
    cin >> n >> secret >> step;
    bool has_secret = false;
    for(int i = 0; i < step; i++){
        int m; cin >> m;
        for(int j = 0; j < m; j++){
            int temp; cin >> temp;
            if(temp == secret){
                has_secret = true;
            }
        }
        if(has_secret){
            cout << "KEEP" << endl;
        } else {
            cout << "REMOVE" << endl;
        }
        has_secret = false;
    }
    return 0;
}