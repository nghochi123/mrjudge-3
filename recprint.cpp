#include <bits/stdc++.h>
using namespace std;

void print(int len, int clen, int arr[]){
    if(clen == len){
        cout << arr[len-1] << " ";
    }
    else{
        cout << arr[clen-1] << " ";
        print(len,clen+1,arr);
    }
}

int main(){
    int n;
    cin >> n;
    int numberarr[n];
    for(int i=0;i<n;i++){
        cin >> numberarr[i];
    }
    print(n,1,numberarr);
}
