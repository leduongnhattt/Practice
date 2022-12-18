#include<iostream>
using namespace std;
int main()
{
	//nam nhuan la nam chia het cho 400
	int n;
	cin>>n;
	if(n<=0){
		cout<<"invalid"<<endl;
	}
	else if((n%400==0)||((n%4==0)&&(n%100!=0)))
	{
		cout<<"yes/n";
	}
	else {
	cout<<"no/n";
}
	
}
