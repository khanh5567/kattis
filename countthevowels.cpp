#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int total = 0;
    for(int i = 0; i < s.length(); i++){
        if(tolower(s[i]) == 'a' || 
        tolower(s[i]) == 'e' ||
        tolower(s[i]) == 'o' ||
        tolower(s[i]) == 'i' ||
        tolower(s[i]) == 'u') total++;
    }
    cout << total;
    return 0;
}