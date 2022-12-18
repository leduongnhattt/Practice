/*
input
10
-1
-1
10
9
2
3
5
-1
4
-1
output
-1 -1 2 3 4 5 -1 -1 -1 9
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<long long,bool>mp;
	for(int i=0;i<n;i++){
		long long x;cin>>x;
		mp[x]=true;
	}
	for(int i=0;i<n;i++){
		if(mp[i]==1){
			cout<<i<<" ";
		}
		else{
			cout<<"-1"<<" ";
		}
	}
}
