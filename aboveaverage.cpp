#include <iostream>
#include <vector>
using namespace std;

float custom_round(float var)
{
    float value = (int)(var * 1000 + .5);
    return (float)value / 1000;
}
 
int main(){
    int n, m; 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        vector<int> arr;
        int counter = 0, avg = 0, sum = 0;
        for(int j = 0; j < m; j++){
            int t; cin >> t;
            arr.push_back(t);
            sum += t;
        }
        avg = sum / m;
        
        for(int k = 0; k < m; k++){
            if(arr[k] > avg){
                counter++;
            }
        }
        
        float percent = counter / (m+0.0) * 100;
        printf("%.3f%% \n", percent);
    }
    return 0;
}