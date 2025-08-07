// O(n log n):-

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    set<int>s(v.begin(),v.end());
    int tmp=0;
    while(s.count(tmp))tmp++;
    cout<<tmp;
}

// O(n):-

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    vector<bool>chk(n+1,false);
    
    for(int i=0;i<n;i++){
        if(v[i]>=0 && v[i]<=n)chk[v[i]]=true;
    }

    for(int i=0;i<=n;i++){
        if(!chk[i]){
            cout<<i;
            break;
        }
    }
}