#include <iostream>

using namespace std;

int main()
{
    const int YEAR = 9;
    const int QUAR = 9 / 4;
    
    int d, m; 
    cin >> d >> m;
    switch(m){
        case 1: m = 1; break;
        case 2: m = 4; break;
        case 3: m = 4; break;
        case 4: m = 0; break;
        case 5: m = 2; break;
        case 6: m = 5; break;
        case 7: m = 0; break;
        case 8: m = 3; break;
        case 9: m = 6; break;
        case 10: m = 1; break;
        case 11: m = 4; break;
        case 12: m = 6; break;
    }   
    int sum = YEAR + QUAR + d + m - 1;
    int day = sum % 7;
    
    switch(day){
        case 0: cout << "Saturday"; break;
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
    }
    return 0;
}
