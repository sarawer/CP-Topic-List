#include<bits/stdc++.h>
using namespace std;


int find_sum(int n){
	if(n==0) return 0; //this is the base case
	return n+find_sum(n-1); 
}

int main(){
	cout<<find_sum(10);//output: 1+2+3+4+5+6+7+8+9+10=55;
}