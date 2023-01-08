#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort(int a, int b, int c, int e, int f, int g);
int main() {
    int a, b, c, e_num, f_num, g_num;
    cin >> a >> b >> c;
    string s; cin >> s;
    char e = s[0], f = s[1], g = s[2];
    e_num = (int)e; f_num = (int)f; g_num = (int)g;
    sort(a, b, c, e_num, f_num, g_num);
    return 0;
}

void sort(int a, int b, int c, int e, int f, int g){
    if (a > c) swap(a, c);
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    int min = a, mid = b, max = c;

    if(e < f && e < g) {
        cout << min;
        if(f > g){
            cout << " " << max << " " << mid; 
        } else {
            cout << " " << mid << " " << max; 
        }
    }
    else if(e < f && e > g) {
        cout << mid << " " << max << " " << min;
    } else if (e < g && e > f){
        cout << mid << " " << min << " " << max;
    }
    else{
        cout << max;
        if(f > g){
            cout << " " << mid << " " << min; 
        } else {
            cout << " " << min << " " << mid; 
        }
    }
    
}

