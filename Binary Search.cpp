#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(), v.end());

    int left=0,right=n-1,mid;
    bool found=false;

    while(left<=right){
        mid=(left+right)/2;
        if(v[mid]==t){
            found=true;
            break;
        }
        else if(v[mid]<t)left=mid+1;
        else right=mid-1;
    }

    if(found) cout<<"Found at index "<<mid<<endl;
    else cout<<"Not found"<<endl;

}

