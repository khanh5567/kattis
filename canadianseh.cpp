#include <iostream>
using namespace std;

int main(){
    string s; getline(cin, s);
    const string c = "eh?", 
    canadian = "Canadian!", 
    not_canadian = "Imposter!";
    
    string temp = s.substr(s.length()-3);
    if(temp == c){
        cout << canadian;
    } else {
        cout << not_canadian;
    }

    return 0;
}