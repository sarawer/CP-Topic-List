#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n); // 0-based index
    for(int i=0;i<n;i++)cin>>v[i];

    vector<int>pref(n+1);   // 1-based index
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1]+v[i-1];
    }

    for(auto u:pref)cout<<u<<' ';

    //find sum of intiger from l to r
    int l=3,r=5; // 1-based index
    int sum = pref[r] - pref[l-1];
    cout<<endl<<sum;
}
