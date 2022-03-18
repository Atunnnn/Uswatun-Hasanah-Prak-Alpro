#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float tambah(float x, float y){
	float hasil;
	return hasil= x+y;
}
float kurang(float x, float y){
	float hasil;
	return hasil= x-y;
}
float kali(float x, float y){
	float hasil;
	return hasil= x*y;
}
float bagi(float x, float y){
	float hasil;
	return hasil= x/y;
}

int main(){
	awal:
	float pilih;
	float p=0,l=0;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Pilihan Menu Operasi"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"silahkan masukkan kode Menu = ";cin>>pilih;
	if(pilih==1){
		cout<<"Bilangan Pertama = ";cin>>p;
		cout<<"Bilangan Kedua   = ";cin>>l;
		cout<<"Hasil "<<p<<"+"<<l<<" = "<<tambah(p,l);
	}
	else if(pilih==2){
		cout<<"Bilangan Pertama = ";cin>>p;
		cout<<"Bilangan Kedua   = ";cin>>l;
		cout<<"Hasil "<<p<<"-"<<l<<" = "<<kurang(p,l)<<endl;
	}
	else if(pilih==3){
		cout<<"Bilangan Pertama = ";cin>>p;
		cout<<"Bilangan Kedua   = ";cin>>l;
		cout<<"Hasil "<<p<<"*"<<l<<" = "<<kali(p,l)<<endl;
	}
	else if(pilih==4){
		cout<<"Bilangan Pertama = ";cin>>p;
		cout<<"Bilangan Kedua   = ";cin>>l;
		cout<<"Hasil "<<p<<"/"<<l<<" = "<<bagi(p,l)<<endl;
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
	getch();
}
