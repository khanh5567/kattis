#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    int n; cin >> n;
    string temp; getline(cin, temp);
    const string S = "Simon says";
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        if(s.find(S) != string::npos){
            cout << s.substr(S.length()+1) << endl;
        }
    }

    
    return 0;
}