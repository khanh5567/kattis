#include <iostream>
using namespace std;

int main(){
    int n, w , h;
    cin >> n >> w >> h;
    int max_len = (w*w) + (h*h);
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        if((temp*temp) <= max_len){
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
    return 0;
}
