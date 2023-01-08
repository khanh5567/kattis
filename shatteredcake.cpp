#include <iostream>
using namespace std;

int main(){
    int w, n, l, tw, tl, dimension = 0;
    cin >> w >> n;
    for(int i = 0; i < n; i++){
        cin >> tw >> tl;
        dimension += tw * tl;
    }
    l = dimension / w;
    cout << l;
    return 0;
}
