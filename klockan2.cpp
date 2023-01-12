#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

float convert(int h, int m){
     
    float m_deg = (360/60) * m; 
    float h_deg = (30 * h) + (0.5 * m); 
    float degree = h_deg - m_deg;
    
    if(degree < 0) {
        degree = degree * -1;
    } 
    
    if(h_deg > m_deg){
        degree = 360 - degree;
    }
    
    return degree * 10;
}

int main()
{
    vector < tuple<int, int, float> > cheat;
    
    for(int i = 1; i <= 12; i++){
        for(int j = 1; j <= 60; j++){
            cheat.push_back(tuple<int, int, float>(i, j, convert(i, j)));
        }
    }

    int input; cin >> input;
    string hour = "", minute = "";
   
    for(int i = 0; i < cheat.size(); i++){
        if(get<2>(cheat[i]) == input){
            if(get<0>(cheat[i]) < 10){
                hour = "0" + to_string(get<0>(cheat[i]));
            } else {
                hour = to_string(get<0>(cheat[i]));
            }
            
            if(get<1>(cheat[i]) < 10){
                minute = "0" + to_string(get<1>(cheat[i]));
            } else {
                minute = to_string(get<1>(cheat[i]));
            }
            
            cout << hour << ":" << minute;
        }
    }
    
    
    return 0;
}
