#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<long long, vector<long long>, greater<long long> > pq;
    long long n,x,i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        pq.push(x);
    }
    for(i=0;i<n;i++){
        cout << pq.top() << endl;
        pq.pop();
    }
}
