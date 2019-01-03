#include <bits/stdc++.h>
using namespace std;

int palindrome(int len, int start, string x, int check){
    if(start >= len || check == 1){
        return check;
    }
    else if(tolower(x[len]) != tolower(x[start])){
        check = 1;
    }
    else{
        return palindrome(len-1,start+1,x,check);
    }
}

int main(){
    string str;
    int n;
    cin >> str;
    n = str.length();
    if(palindrome(n-1,0,str,0) == 1){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
}
