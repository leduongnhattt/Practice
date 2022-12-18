/*
input
5
1 2 3 4 5
output
6
*/
#include<bits/stdc++.h>
using namespace std;
int cnt[10000001];//tao mang phu
int main(){
	int n;cin>>n;
	memset(cnt,0,sizeof(cnt));//cho cac phan tu cua mang bang 0
	for(int i=0;i<n;i++){
		int x;cin>>x;
       if(x>0){
    	cnt[x]=1;//danh dau cac phan tu xuat hien
	    }
	}
	for(int i=1;i<10000001;i++){
		if(cnt[i]==0){
			cout<<i;//phan tu nao khong xuat hien in ra no
			break;
		}
	}
}
