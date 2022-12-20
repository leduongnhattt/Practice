/*
input
7
2 3 10 6 4 8 1
output
8
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i;i<n;i++){
		cin>>a[i];
	}
	int min_value=a[0];
	int res=-1e9;
	for(int i=1;i<n;i++){
		if(a[i]>min_value){
			res=max(res,a[i]-min_value);
		}
		min_value=min(min_value,a[i]);
	}
	if(res=-1e9){
		cout<<"-1";
		}
		else cout<<res;
}
