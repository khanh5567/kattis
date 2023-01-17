#include <iostream>
#include <vector>
using namespace std;

int checkOcelot(vector<char>& v, int& ocelotCount, int& numBell){
    if(ocelotCount > 0){
        //do the magic here
        for(int i = v.size() - 1; i >= 0; i--){
            if(v[i] == 'O' && i == v.size() - 1){
                v[i] = 'Z';
                ocelotCount--;
                numBell++;
                break;
            } else if (v[i] == 'O'){
                v[i] = 'Z';
                ocelotCount--;
                for(int j = v.size() - 1; j > i; j--){
                    v[j] = 'O';
                    ocelotCount++;
                }
                numBell++;
                break;
            }
        }
        checkOcelot(v, ocelotCount, numBell);
    } else {
        return numBell;
    }
}

int main(){
    int n;
    cin >> n;
    vector<char> v;
    int oCount = 0, numBell = 0;
    
    for(int i = 0; i < n; i++){
        char temp; cin >> temp;
        if(temp == 'O'){
            oCount++;        
        }
        v.push_back(temp);
    }

    int count = checkOcelot(v, oCount, numBell);
    
    cout << count;
    
    return 0;
}  

