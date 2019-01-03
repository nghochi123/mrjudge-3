#include <bits/stdc++.h>
using namespace std;

int main(){
    queue< pair<int,int> > pairq;
    pairq.push( make_pair(2,3));
    pair<int,int> outpair = pairq.front();
    pairq.pop();
    cout << outpair.first << " " << outpair.second;
}
