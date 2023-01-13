#include <iostream>
using namespace std;

int main(){
    int x, n;
    cin >> x >> n;
    int result = (n+1)*x;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        result -= temp;
    }
    cout << result;
    return 0;
}
