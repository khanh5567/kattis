#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first = n%10;
    int second = n/10;
    cout << first << second;
    return 0;
}
