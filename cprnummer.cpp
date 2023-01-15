#include <iostream>
using namespace std;

int main(){
    string s; 
    getline(cin, s);
    int sum = 0, rem;
    for(int i = 0; i < s.length(); i++){
        switch(i){
            case 0: sum += 4 * (int(s[i]) - 48) ; break;
            case 1: sum += 3 * (int(s[i]) - 48) ; break;
            case 2: sum += 2 * (int(s[i]) - 48) ; break;
            case 3: sum += 7 * (int(s[i]) - 48) ; break;
            case 4: sum += 6 * (int(s[i]) - 48) ; break;
            case 5: sum += 5 * (int(s[i]) - 48) ; break;
            case 7: sum += 4 * (int(s[i]) - 48) ; break;
            case 8: sum += 3 * (int(s[i]) - 48) ; break;
            case 9: sum += 2 * (int(s[i]) - 48) ; break;
            case 10: sum += 1 * (int(s[i]) - 48) ; break;
        }
    }
    
    rem = sum % 11;
   
    if(rem == 0){
        cout << 1;
    } else {
        cout << 0;
    }
    
    return 0;
}