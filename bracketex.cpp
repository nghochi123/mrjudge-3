#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> bracket;
    char x;
    int valid = 1;
    int n, i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        if(x == '{' || x == '[' || x == '('){
            bracket.push(x);
        }
        else if (x == ')'){
            if(bracket.empty() == 0){
                if(bracket.top() == '('){
                    bracket.pop();
                }
                else{
                    valid = 0;
                }
            }
            else{
                valid = 0;
            }
        }
        else if (x == ']'){
            if(bracket.empty() == 0){
                if(bracket.top() == '['){
                    bracket.pop();
                }
                else{
                    valid = 0;
                }
            }
            else{
                valid = 0;
            }
        }
        else if (x == '}'){
            if(bracket.empty() == 0){
                if(bracket.top() == '{'){
                    bracket.pop();
                }
                else{
                    valid = 0;
                }
            }
            else{
                valid = 0;
            }
        }
    }
    if(bracket.empty() == 0){
        valid = 0;
    }
    if(valid == 1){
        cout << "Valid";
    }
    else{
        cout << "Invalid";
    }
}
