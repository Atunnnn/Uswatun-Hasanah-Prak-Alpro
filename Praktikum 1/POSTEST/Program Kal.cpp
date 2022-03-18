#include<iostream>
using namespace std;
int main(){
	awal:
	float pilih,a,b,hasil;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Pilihan Menu Operasi"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"Pilih Menu No = ";cin>>pilih;
	if(pilih==1){
		cout<<"Bilangan Pertama = ";cin>>a;
		cout<<"Bilangan Kedua   = ";cin>>b;
		hasil = a+b;
		cout<<"Hasil "<<a<<"+"<<b<<" = "<<hasil;
	}
	else if(pilih==2){
		cout<<"Bilangan Pertama = ";cin>>a;
		cout<<"Bilangan Kedua   = ";cin>>b;
		hasil = a-b;
		cout<<"Hasil "<<a<<"-"<<b<<" = "<<hasil<<endl;
	}
	else if(pilih==3){
		cout<<"Bilangan Pertama = ";cin>>a;
		cout<<"Bilangan Kedua   = ";cin>>b;
		hasil = a*b;
		cout<<"Hasil "<<a<<"*"<<b<<" = "<<hasil<<endl;
	}
	else if(pilih==4){
		cout<<"Bilangan Pertama = ";cin>>a;
		cout<<"Bilangan Kedua   = ";cin>>b;
		hasil = a/b;
		cout<<"Hasil "<<a<<"/"<<b<<" = "<<hasil<<endl;
	}
	else{
		cout<<"Angka Yang Dimasukkan Tidak Ditemukan"<<endl;
	}
	char jawab;
	cout<<"\n\nApakah Anda ingin Melanjutkan Program Kalkulator (Y|N) = ";cin>>jawab;
	if(jawab == 'Y'){
		goto awal;
	}
	cout<<"Program Anda Telah Berakhir"<<endl;
	return 0;
}
