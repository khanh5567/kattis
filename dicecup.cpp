#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    int sum[40] = {};
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            sum[i+j]++;
        }
    }
    
    int max = 0;
    for(int i = 1; i < n+m; i++){
        if(sum[i] > max){
            max = sum[i];
        }
    }
    
    for(int i = 1; i < n+m; i++){
        if(sum[i] == max) {
            cout << i << endl;
        }
    }

    return 0;
}
