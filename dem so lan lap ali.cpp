/*
input          
5
1 2 1 4 5
output
2
*/
#include<bits/stdc++.h>
using namespace std;
int cnt[100001];
int main(){
	memset(cnt,0,sizeof(cnt));
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a[i];
		cnt[a[i]]++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(cnt[a[i]]>=2){
			++ans;
		}
	}
	cout<<ans;
}

