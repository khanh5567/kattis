#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, bool>> w, q;
    int t = 0;
     
    for(int i = 0; i < n; i++){
        int time; 
        cin >> time;
        w.push_back({time, false});
    }
    
    for(int i = 0; i < m; i++){
        int time; 
        cin >> time;
        q.push_back({time, false});
    }
    
    sort(w.begin(), w.end());
    sort(q.begin(), q.end());
    
    for(int i = 0; i < w.size(); i++){
        for(int j = i; j < q.size(); j++){
            if(w[i].first <= q[j].first && !q[j].second){
                t++;
                q[j].second = true;
                break;
            }
        }
        
    }
    
    cout << t;
    
    return 0;
}