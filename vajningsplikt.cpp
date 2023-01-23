#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string a, b, c;
    cin >> a >> b >> c;
    int from = a == "North" ? 1 : a == "West" ? 2 : a == "South" ? 3 : 4;
    int to = b == "North" ? 1 : b == "West" ? 2 : b == "South" ? 3 : 4;
    int other = c == "North" ? 1 : c == "West" ? 2 : c == "South" ? 3 : 4;
    
    int direction = from - to;
    int other_direction = other - from;

    
    if(direction % 2 == 0){
        if(other_direction == 1 || other_direction == -3) cout << "YES";
        else cout << "NO";
    } else if (direction == 1 || direction == -3){
        if(other_direction == 1 || other_direction == -3) cout << "YES";
        else if((other - from) % 2 == 0) cout << "YES";
        else cout << "NO";
    } else cout << "NO";
    
    
    return 0;
}
