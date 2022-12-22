/*
input:
10
2 3 1 4 5 7 14 3 5 10
output
7
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
	int res=1;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			res=max(res,gcd(a[i],a[j]));
		}
}
    cout<<res;
}
