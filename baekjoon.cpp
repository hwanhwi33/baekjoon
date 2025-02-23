#include<bits/stdc++.h>

using namespace std;
int building[500005];
set<int> sights;
int n,q;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n>>q;

    for(int i=0;i<n;i++){
        cin>>building[i];
        if(building[i]==1)sights.insert(i);
    }
    int dh=0; // 도현이 위치
    while(q--){
        int qry; cin>>qry;
        if(qry==1){
            int idx;cin>>idx;
            idx--;
            if(building[idx])sights.erase(idx);
            else sights.insert(idx);
            building[idx]=1-building[idx];
        }
        else if(qry==2){
            int x; cin>>x;
            dh+=x;
            dh%=n;
        }
        else{ // qry==3
            if(sights.empty()) cout<<-1<<'\n';
            else{
                if(sights.lower_bound(dh)!=sights.end()) cout<<*sights.lower_bound(dh)-dh <<'\n';
                else cout<<n+*sights.begin()-dh<<'\n';
            }
        }
    }

}