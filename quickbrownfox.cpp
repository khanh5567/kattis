#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    int n; cin >> n;
    string temp; getline(cin, temp);
    
    for(int i = 0; i < n; i++){
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        string s;
        getline(cin, s);
        
        for(int i = 0; i < s.length(); i++){
            char temp = tolower(s[i]);
            if(alphabet.find(temp) != string::npos){
                alphabet.erase(remove(alphabet.begin(), alphabet.end(), temp), alphabet.end());
            }
        }
        if(alphabet.length() == 0){
            cout << "pangram" << endl;
        } else {
            cout << "missing " << alphabet << endl;
        }
    }

    
    return 0;
}