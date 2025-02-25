#include<bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        pq.push(num);
    }
    for(int i=n;i<n*n;i++){
        int num;cin>>num;
        pq.push(num);
        pq.pop();
    }
    cout<<pq.top();
}