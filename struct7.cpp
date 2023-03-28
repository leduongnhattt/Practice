#include <bits/stdc++.h>
using namespace std;
struct Sinhvien {
	string mssv, ten, lop, ns ;
	double gpa ;
};
void nhap (Sinhvien &x){
	cout << "Nhap ma so sinh vien : " ; cin >> x.mssv ;
	cin.ignore();
	cout << "Nhap ho va ten sinh vien : " ; getline(cin, x.ten);
	cout << "Nhap lop : " ; cin >> x.lop;
	cout << "Nhap nam sinh : " ; cin >> x.ns;
	cout << "Nhap diem gpa : " ; cin >> x.gpa;
	
}
void in (Sinhvien x){
	//cout << "--------------------------------\n";
	cout << "Ma so sinh vien : " << x.mssv << endl;
	cout << "Ho va ten : " << x.ten << endl;
	cout << "Lop : " << x.lop << endl;
	cout << "Nam sinh : " << x.ns << endl;
	cout << "Diem gpa : " << x.gpa << endl;

	
}
void nhapds(Sinhvien a[], int &n){
	cout << "Nhap so luong sinh vien " ; cin >> n;
	for ( int i = 0 ; i < n ; i++ ){
		cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
		nhap(a[i]);
	}
}
void inds(Sinhvien a[], int n){
	for ( int i = 0 ; i < n ; i++ ){
		cout << "------------------------\n";
		cout << "Thong tin sinh vien thu " << i + 1 << endl;
		in(a[i]);
		cout << "------------------------\n";
	}
}
void findmssv (Sinhvien a[], int n){
	string ms;
	cout << "Nhap ma so sinh vien can tim kiem ";
	cin >> ms;
	bool ok = false ;
	for ( int i = 0 ; i < n ; i++ ){
		if ( ms == a[i].mssv ){
			ok = true ;
			in(a[i]);
		}
	}
	if (!ok) cout << "Khong tim thay sinh vien !" ;
}
void lkgpa (Sinhvien a[], int n){
    double res = 0 ;
	for ( int i = 0 ; i < n ; i++ ){
		if ( a[i].gpa > res ){
			res = a[i].gpa ;
		}
	}
	cout << "Danh sach sinh vien co diem gpa cao nhat : \n";
	for ( int i = 0 ; i < n ; i++ ){
		if (a[i].gpa == res ){
			in(a[i]);
		}
	}
	
}
bool cmp1(Sinhvien a, Sinhvien b){
	return a.gpa > b.gpa ;
}
void lkgpa2(Sinhvien a[], int n ){
	vector <Sinhvien> v;
	for ( int i = 0 ; i < n ; i++ ){
		if (a[i].gpa >= 2.5){
			v.push_back(a[i]);
		}
	}
	cout << "Danh sach sinh vien co diem gpa tren 2.5 :\n";
	sort (v.begin(), v.end(), cmp1);
	for (int i = 0 ; i < v.size(); i++){
		cout << "----------------------\n";
		in(v[i]);
		cout << "----------------------\n";
	}
}
void findten (Sinhvien a[], int n){
	string name ;
	cout << "Nhap ten sinh vien can tim kiem ";
	cin.ignore();
	bool ok = false ;
	getline(cin, name);
	for ( int i = 0 ; i < n ; i++ ){
		if (a[i].ten.find(name) != string :: npos ){
			ok = true ;
			in(a[i]);
		}
	}
	if (!ok) cout << "Khong tim thay sinh vien !";
}
vector<string> chuanhoa(string x){
	vector<string> v;
	stringstream ss(x);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	return v;
}
bool cmp2(Sinhvien a, Sinhvien b){
	vector <string> v1 = chuanhoa(a.ten) , v2 = chuanhoa(b.ten);
	if (v1.back() != v2.back()) return v1.back() < v2.back() ;
	int len1 = v1.size() , len2 = v2.size();
	for ( int i = 0 ; i < min(len1, len2)  ; i++ ){
		if ( v1[i] != v2[i] )
		return v1[i] < v2[i] ;
	}
	return len1 < len2 ;
}
void sapxepten(Sinhvien a[], int n){
	sort (a, a + n, cmp2);
}
bool cmp3(Sinhvien a, Sinhvien b){
	if( a.lop != b.lop ) return a.lop < b.lop ;
		vector <string> v1 = chuanhoa(a.ten) , v2 = chuanhoa(b.ten);
	if (v1.back() != v2.back()) return v1.back() < v2.back() ;
	int len1 = v1.size() , len2 = v2.size();
	for ( int i = 0 ; i < min(len1, len2)  ; i++ ){
		if ( v1[i] != v2[i] )
		return v1[i] < v2[i] ;
	}
	return len1 < len2 ;
}
void sapxeplop(Sinhvien a[], int n){
	sort (a, a+n , cmp3);
}
bool cmp4(Sinhvien a, Sinhvien b){
	if(a.lop != b.lop) return a.lop < b.lop ;
	return a.gpa > b.gpa;
}
void sapxeplop1(Sinhvien a[], int n){
	sort (a, a + n , cmp4);
}
int main (){
	Sinhvien a[100];
	int n ;
	while (true){
		cout << "\t\t\t\t------------MENU------------\n";
		cout << "1.Nhap danh sach thong tin sinh vien \n";
		cout << "2.In danh sach thong tin sinh vien\n";
		cout << "3.Tim kiem sinh vien thong qua mssv\n";
		cout << "4.Tim kiem sinh vien thong qua ten \n";
		cout << "5.Liet ke danh sach sinh vien co diem gpa cao nhat \n";
		cout << "6.Liet ke danh sach vien co diem gpa tren 2.5\n";
		cout << "7.Sap xep sinh vien theo ten\n";
		cout << "8.Sap xep sinh vien theo lop\n";
		cout << "9.Sap xep sinh vien theo lop co diem gpa giam dan\n";
		cout << "10.Ket thuc chuong trinh\n";
		int luachon ;
		cout << "Nhap lua chon cua ban \n";
		cin >> luachon;
		if( luachon == 1 ){
			nhapds(a,n);
		}
		else if( luachon == 2){
			inds(a,n);
		}
		else if( luachon == 3){
			findmssv(a,n);
		}
		else if( luachon == 4){
			findten(a,n);
		}
		else if( luachon == 5 ){
			lkgpa(a,n);
		}
		else if( luachon == 6 ){
			lkgpa2(a,n);
		}
		else if( luachon == 7 ){
			sapxepten(a,n);
		}
		else if( luachon == 8 ){
			sapxeplop(a,n);
		}
		else if ( luachon == 9 ){
			sapxeplop1(a,n);
		}
		else if ( luachon == 10 ){
			return 0;
		}
		else cout << "Nhap sai !, Vui long nhap lai...\n";
		system ("pause");
		system ("cls");
	}
}
