#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	int pilihan,x, y, z,nilai,gp,jk,lembur,gt,gb,pajak,tinggi;
float berat;
char bidang, pilih;
double p,l,a,t,L;
system ("color B");
cobalagi:
do {
system("cls");
cout << "PILIH PROGRAM : \n";
cout << "=============== \n";
cout << "1. Hitung Gaji Pegawai \n";
cout << "2. Hitung Berat Dan Tinggi Badan \n";
cout << "3. Hitung Positif, Negatif, Dan Nol \n";
cout << "4. Hitung Luas Persegi Panjang Dan Segitiga \n";
cout << "5. Hitung Nilai Absolut \n";
cin >> pilihan;
switch(pilihan){

case 1:
		system("cls");
		cout << "Masukkan gaji pegawai : ";
		cin >> gp;
		cout << "Masukkan jam kerja    : ";
		cin >> jk;
		
		if(jk>40){
			lembur= (jk - 40)*(gp/40);
			gt = (lembur*1.5)+gp;
			pajak=gt*0.15;
			gb=gt-pajak;
		}
		else {
			pajak=gp*0.15;
			gb=gp-pajak;
		}
		
		cout<<"Gaji bersih pegawai : "<< gb<<endl;
break;

case 2:
	system("cls");
	cout << "Masukkan tinggi badan dalam cm : ";
	cin >> tinggi;
	
	cout << "Masukkan berat badan dalam kg : ";
	cin >> berat;	
	
	if (berat<tinggi/2.5) {
		cout << "Hasil : Kurus" << endl;
	}
	else if  (tinggi/2.5 <= berat && berat <= tinggi/2.3) {
		cout <<  "Hasil : Normal" << endl;
	}
	else if (tinggi/2.3 < berat)
		cout << "Hasil : Gemuk" << endl;
break;

case 3:
	system("cls");
	cout<<"Masukan Nilai : ";
	cin>>nilai;
	
	if (nilai>0)
		cout<<"Nilai Positif";
	else if (nilai<0)
		cout<<"Nilai Negatif";
	else
		cout<<"Nilai 0";
break;

case 4:
	system("cls");
	cout << "Pilih Bidang : ";
	cin >> bidang;

	if (bidang == 'P' || bidang == 'p') {	
		cout << "   Mengitung luas persegi panjang \n";	
		cout << "   Masukkan panjangnya : ";
		cin >> p;
		cout << "   Masukkan lebarnya   : ";
		cin >> l;
		L = p*l;
		cout << "   Luas persegi panjang : "<< L<<endl;
	}
	else if (bidang == 'S' || bidang == 's') {
		cout << "   Mengitung luas segitiga \n";	
		cout << "   Masukkan alasnya   : ";
		cin >> a;
		cout << "   Masukkan tingginya : ";
		cin >> t;
		L = 0.5*a*t;
		cout << "   Luas persegi panjang : "<< L<<endl;
	}	
	else{
		cout<<"Maaf, Anda Salah Memilih"<<endl;
	}
break;

case 5:
	system("cls");
	cout << "Input nilai x = ";
	cin  >> x;
	
	cout << "Input nilai y = ";
	cin  >> y;
	
	
	if (x > y)	{
		z = y - x;	
		cout<<abs (z)<<endl;
		cout<<"Hasil Positif";
	}
	
	else if (y > x) {
		z = x - y;
		cout<<abs (z)<<endl;
		cout<<"Hasil Positif";
	}
	
		else if(z == 0) {
		z = z * (-1) ;
		cout<<abs (z)<<endl;
		cout<<"Bukan Nilai Positif";
	}
break;

default : 
	cout << "Salah Ketik";
	cout << " \n";
	getch();
	goto cobalagi;
break;
}
cout << "\n\nApakah Anda Ingin Mengulang?[y/t] : ";
cin >> pilih;
cout << " \n";
}
while(pilih=='Y' || pilih=='y');
system("cls");
cout << "Makasih :D";
getch();
return 0;
}
