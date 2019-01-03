#include <bits/stdc++.h>
using namespace std;

int exp(int a, int b){
    if(b == 1){
        return a;
    }
    else if(b >= 2){
        return a*exp(a,b-1);
    }

}

int main(){
    int n,m;
    cin >> n >> m;
    int x = exp(n,m);
    cout << x;
}
