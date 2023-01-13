#include <iostream>
using namespace std;

int main(){
    int m, n, sum = 0;
    double lower, upper;
    cin >> m >> n;
    int remain_judge = m - n;
    for(int i = 0; i < n; i++){
        int temp_score; cin >> temp_score;
        sum += temp_score;
    }
    lower = (sum + (-3*remain_judge)) / (m+0.0);
    upper = (sum + (3*remain_judge)) / (m+0.0);
    cout << lower << " " << upper;
    return 0;
}
