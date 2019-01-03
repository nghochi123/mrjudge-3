#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,score;
    int sum = 0;
    string nam[3];
    string name;
    map<string,int> con;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> name >> score;
        con[name] = score;
    }
    cin >> j;
    for(i=0;i<j;i++){
        cin >> name;
        auto it = con.lower_bound(name);
        sum += (*it).second;
    }
    cout << sum/j;
}
