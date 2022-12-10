#include<iostream>
using namespace std;
int main(){
    while(true){
        system("cls");
        cout<<"\n\n\t\t======MAY TINH======"<<endl;
        cout<<"1.TINH TONG "<<endl;
        cout<<"2.TINH HIEU "<<endl;
        cout<<"3.TINH TICH "<<endl;
        cout<<"4.TINH THUONG "<<endl;
    
      float a;
        cout<<"nhap so a ="<<endl;
        cin>>a;
   float b;
        cout<<"nhap so b ="<<endl;
        cin>>b;
        int luachon;
        cout<<"nhap lua chon "<<endl;
        cin>>luachon;
        if(luachon!=1&&luachon!=2&&luachon!=3&&luachon!=4){
            cout<<"Ban da nhap sai,vui long nhap lai";
            system("pause");
        }
        else if(luachon==1){
            cout<<"Tong 2 so la "<<a+b;
            system("pause");
        }
        else if(luachon==2){
            cout<<"Hieu 2 so la "<<a-b;
            system("pause");
        }
        else if(luachon==3){
            cout<<"Tich 2 so la "<<a*b;
            system("pause");
        }
        else if(luachon==4){
            cout<<"Thuong 2 so la "<<1.0*a/b;
            system("pause");
        }
        else{
            break;
        }
    }
}
