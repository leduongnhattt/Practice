/*
input:
4
8 24 16 32
output:
3
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return(b,a%b);
}
int main(){
	int n;
	int ans=1;
	int res=0;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		res=gcd(res,a[i]);
	}
	for(int i =2;i<=sqrt(res);i++){
		if(res%i==0){
			++ans;
		if(i!=res/i)
			++ans;
	 }
	}
	cout<<ans;
}	

