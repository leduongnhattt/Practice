/*
intput
5
1
4
3
5
8
output
1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	int a[10005];
	for(int i=0;i<n;i++){
	      cin>>a[i];
	}
	sort(a,a+n);//sap xep mang tang dan
	int res=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			res=min(res,(a[j]-a[i]));
		}
	}
	cout<<res;
	}
	
