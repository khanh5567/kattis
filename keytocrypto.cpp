#include <iostream>
using namespace std;

int main(){
    string cipher = "", org = "", secret;
    getline(cin, cipher);
    getline(cin, secret);
    
    for(int i = 0; i < cipher.length(); i++){
        char decoded;
        //if it goes over the alphabet
        if (cipher[i] - (secret[i] - 65) < 'A'){
            decoded = (char)(cipher[i] - (secret[i] - 65) + 26);
        } else {
            decoded = (char)(cipher[i] - (secret[i] - 65));
        }
        //cout << "Secret at [" << i << "]: " << secret [i] << " ";
        secret += decoded;
        org += decoded;
    }
    
    cout << org;
}