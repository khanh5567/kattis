#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int score; 
    cin >> score;
    
    if(score >= a) cout << "A";
    else if(score >= b) cout << "B";
    else if(score >= c) cout << "C";
    else if(score >= d) cout << "D";
    else if(score >= e) cout << "E";
    else cout << "F";
    
    return 0;
}
