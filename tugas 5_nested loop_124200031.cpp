#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int pilih ;
	cout <<"----------------------------------------------------"<<endl;
	cout <<"TUGAS ALGORITMA DAN PEMROGRAMAN I"<<endl;
	cout <<endl;
	cout <<"nama\t\t = Vicha Dorena Br Tarigan"<< endl;
	cout <<"NIM\t\t = 124200031"<< endl;
	cout <<"----------------------------------------------------"<<endl;
	cout <<"Tugas 5 (Nested Loop)"<<endl;
	
	cout <<"===================================================="<<endl;
	cout <<"                 Gambar Bangun Datar                "<<endl;
	cout <<"===================================================="<<endl;
	cout <<"1. Kotak Bolong"<<endl;
	cout <<"2. Segitiga"<<endl;
	cout <<endl;
	cout <<"Pilih :"; cin >> pilih ;
	cout <<endl;
	
	switch (pilih)
	{ 
		case (1) : //Kotak Bolong 
		{ int x, y, m, n;
		cout <<"Panjang  :"; cin >> x;
		cout <<"Lebar    :"; cin >> y;
		cout <<endl;
			for (m=0;m<x;m++) //panjang
				{
				for (n=0;n<y;n++) //lebar
					{
					if (m==0||m==x-1||n==0||n==y-1)
						{
						cout <<" *";
						}
					else 
						{
						cout <<"  ";
						}
					}
				cout<<endl;
				}
			getch();
		}
		break ;
		 
		case (2) : //Segitiga
		{ int bilangan, t, a, b ;
		cout <<"Tinggi : "; cin >> t;
		cout <<endl;
			for (a=1;a<=t;a++)
				{ 
				bilangan=a;
				for (b=1;b<=a;b++)
					{  
					cout <<bilangan<<" ";
					bilangan = bilangan + t - b;
					}
				cout<<endl;
				}
			getch();
		}
		break ;
	}
	return 0;	
}
