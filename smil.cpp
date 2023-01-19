#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findAllOccurances(vector<size_t> &v, string data, string toSearch)
{
    
    size_t pos = data.find(toSearch);

    while(pos != string::npos)
    {
      
        v.push_back(pos);
       
        pos = data.find(toSearch, pos + toSearch.size());
    }
}

int main(){
    const string SMILE_1 = ":)", 
    SMILE_2 = ";)", 
    SMILE_3 = ":-)", 
    SMILE_4 =  ";-)";
    
    string s; cin >> s;
    vector<size_t> v;
    
    findAllOccurances(v, s, SMILE_1);
    findAllOccurances(v, s, SMILE_2);
    findAllOccurances(v, s, SMILE_3);
    findAllOccurances(v, s, SMILE_4);
    
    sort(v.begin(), v.end());
    
    for(size_t pos : v){
        cout << pos << endl;
    }
        
    
        
    return 0;
}