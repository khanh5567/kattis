#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setprecision(13);
    double cir = 60 * M_PI;
    int curr, next, distance;
    string s; 
    int trial; 
    cin >> trial;
    
    //THIS TAKES HOURS TO FIGURE OUT 
    string temp;
    getline(cin, temp);

    while(trial > 0){
        float total = 0;
        getline(cin, s);
        for(int i = 0; i < s.length() - 1; i++){
            curr = s[i] == '\'' ? 28 : s[i] == ' ' ? 27 : (int(s[i]) - 64);
            next = s[i+1] == '\'' ? 28 : s[i+1] == ' ' ? 27 : (int(s[i+1]) - 64);
            distance = curr - next > 0 ? curr - next : next - curr;
            distance = distance > 14 ? 28 - distance : distance;
            total += distance;  
        }
        
        cout << total * cir / 420.0 + s.length() << endl;
        trial--;
    }
    


    return 0;
}
