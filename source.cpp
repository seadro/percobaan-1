#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void main()
{
	float alas, tinggi, panjang, lebar, jari_jari, luas;
	char tipe;
	cout << "\t\tProgram menghitung luas persegi panjang dan lingkaran\n\n";
	cout << " Tekan \n1 untuk luas persegi panjang\n2 untuk luas lingkaran\n:";
	cin >> tipe;

	if (tipe == '1')
	{
		cout<<"Masukkan  panjang: ";
		cin >> panjang;
		cout<<"Masukkan lebar: ";
		cin >> lebar;
		luas = panjang*lebar;
		cout << "Luas persegi panjang: " << luas << endl;
	}
	if (tipe == '2')
	{
		cout << "Masukkan jari-jari: ";
		cin >> jari_jari;
		luas = (jari_jari*jari_jari)*3.14;
		cout << "Luas lingkaran: " << luas << endl;
	}

	cout<<("\n\n");
}
