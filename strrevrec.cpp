#include <bits/stdc++.h>
using namespace std;

char rev(int len, string f){
    if(len == 0){
        cout << f[0];
    }
    else{
        cout << f[len];
        len--;
        rev(len, f);
    }

}

int main(){
    int l;
    string str;
    cin >> str;
    l = str.length()-1;
    rev(l, str);

}
