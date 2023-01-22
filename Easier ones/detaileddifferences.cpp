#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s, d;

    for(int i = 0; i < n; i++){
        cin >> s;
        cin >> d;
        cout << s << endl;
        cout << d << endl;
        for(int j = 0; j < s.length();j++){
            if(s[j] == d[j]){
                cout << '.';
            } else if (s[j] != d[j]) {
                cout << '*';
            }
        }
        cout << endl;
        cout << endl;
    }
    return 0;
}
