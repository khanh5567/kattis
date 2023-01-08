#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int n, m;
    vector<string> v;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m;
        for(int j = 0; j < m; j++){
            string s = "";
            cin >> s;
            if(j == 0) {
               v.push_back(s);
            } else {
                if(find(v.begin(), v.end(), s) != v.end()){
                    
                } else {
                    v.push_back(s);
                }
            }
        }
        cout << v.size() << endl;
        v.clear();
    }
    
    return 0;
}