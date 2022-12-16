#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,may;
	srand(time(0));
	while(true){
		system("color 3");
		cout<<"\t\t\t\t\t---------MINI GAME---------"<<endl;
		cout<<"BAN NHAN PHIM 1 SE LA KEO"<<endl;
		cout<<"BAN NHAN PHIM 2 SE LA BAO"<<endl;
		cout<<"BAN NHAN PHIM 3 SE LA BUA"<<endl;
		may=rand()%3+1;
	    cout<<"\t\t\t\t\t  Nhap lua chon cua ban "<<endl;
	    cin>>x;
	    switch(x){
	    	case 1:
	    		cout<<"Ban da chon KEO"<<endl;
	    	break;
	    	case 2:
	    		cout<<"Ban da chon BAO"<<endl;
	    	break;
	    	case 3:
	    		cout<<"Ban da chon BUA"<<endl;
	    	break;
		}
		if(x==1){
            if(may==1){
			cout<<"\t\tBan da hoa";
		}
		else if(may==2){
			cout<<"\t\tChuc mung ban da thang";
		}
		else if(may==3){
			cout<<"\t\tBan da thua,co gang hon nhe!";
		}
				system("pause");
			}
	if(x==2){
		if(may==1){
			cout<<"\t\tChuc mung ban da thang ";
		}
		else if(may==2){
			cout<<"\t\tBan da hoa ";
		}
		else if(may==3){
			cout<<"\t\tBan da thua,co gang hon nhe!";
		}
		system("pause");
	}
    if(x==3){
    	if(may==1){
    		cout<<"\t\tBan da thua,co gang hon nhe!";
		}
		else if(may==2){
			cout<<"\t\tChuc mung ban da thang";
		}
		else if(may==3){
			cout<<"\t\tBan da hoa";
		}
		system("pause");
	}
	else {
		cout<<"Ban da nhap sai,vui long nhap tu 1 den 3 ";
	}
}
}
