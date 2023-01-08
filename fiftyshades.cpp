// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    string next;
    string p = "pink";
    string r = "rose";
    
    int n; 
    int total = 0;
    cin >> n; 
   
    for (int i = 0; i <= n; i++){
        getline(cin, next);
        transform(next.begin(), next.end(),
            next.begin(), ::tolower);
       
        if(next.find(p) != string::npos || 
        next.find(r) != string::npos) {
            total++;
        } else {
            continue;
        }
    }
    
    if (total > 0) {
        cout << total;
    }
    else {
        cout << "I must watch Star Wars with my daughter";
    }
    

    return 0;
}