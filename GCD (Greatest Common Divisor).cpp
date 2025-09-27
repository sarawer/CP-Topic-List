#include<bits/stdc++.h>
using namespace std;
#define int long long


//Simple Method
int gcd1(int a,int b){
	int m=min(a,b);
	while(m>1){
		if(a%m==0 && b%m==0){
				break;
		}else m--;
	}
	return m;
}

//using Euclid's Algorithm
int gcd2(int a,int b){
	if(b==0)return a;
	return gcd2(b,a%b);
}

int32_t main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd1(a,b)<<endl;
	cout<<gcd2(a,b)<<endl;
	cout<<__gcd(a,b); //Using Library Functions
}
