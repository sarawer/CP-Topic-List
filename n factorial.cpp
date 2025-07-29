#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
	if(n==0) return 1; //this is the base case
	return n*factorial(n-1); // we know n!=n*(n-1)!.
}

int main(){
	cout<<factorial(10); //output=10*9*8*7*6*5*4*3*2*1=3628800
}