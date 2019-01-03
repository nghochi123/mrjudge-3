#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<long long> catlunch;
    long long i,n,m,h;
    long long maximum = 0;
    long long sum = 0;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> h;
        catlunch.push(h);
    }
    for(i=m;i<n;i++){
        cin >> h;
        sum += catlunch.top();
        catlunch.pop();
        catlunch.push(h);
        if(sum > maximum){
            maximum = sum;
        }
    }
    for(i=0;i<m;i++){
        sum += catlunch.top();
        catlunch.pop();
        if(sum > maximum){
            maximum = sum;
        }
    }
    cout << maximum;
}
