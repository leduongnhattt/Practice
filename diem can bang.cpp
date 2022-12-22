/*
input
7
-7 1 5 2 -4 3 0
output
3
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	int sum=0;
	int left=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	for(int i=0;i<n;i++){
		sum-=a[i];
		if(sum==left){
			cout<<i;
		}
		else left+=a[i];
		
	}
}
