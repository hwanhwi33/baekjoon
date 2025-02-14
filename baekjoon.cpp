#include<bits/stdc++.h>

using namespace std;

unordered_map<string,int> um;
vector<string> wating;
int k,L;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>k>>L;

    for(int i=0;i<L;i++){
        string student;
        cin>>student;
        if(um.find(student)!=um.end()){
            wating[um[student]]="X";
        }
        wating.push_back(student);
        um[student]=i;

    }

    int cnt=0;
    for(int i=0;i<wating.size();i++){
        if(cnt==k)break;
        
            if(wating[i]!="X"){
                cout<<wating[i]<<'\n';
                cnt++;
            }

    }

}