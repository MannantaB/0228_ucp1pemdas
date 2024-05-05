// 1. string nama, int umur, float nilai
// 2. prosedur :
//    void inputData(){
//      cout << "Masukan bilangan pertama : ";
//      cin >> bilangan1;
//      cout << "Masukan bilangan kedua : ";
//      cin >> bilangan2;
//      }
//    fungsi :
//    int penjumlahan(int a, int b)
//    {
//    return a + b;
//    }
// 
// 3.do
//   {
//    cout << "makan" << endl;
//    cout << "Ibadah" << endl;
//    cout << "Apakah anda masih hidup? (Yes/No)";
//    cin >> pilihan;
//    } 
//    while (pilihan == "Yes");
// 
// 4.if (bilangan >= 5)
//    {
//       bilangan = 2 * bilangan;
//    }
//    else
//    {
//        bilangan = 4 * bilangan;
//    }
// 
// 5.struct Mahasiswa { 
//     string nim;
//     string nama; 
//     };
//   
//

#include <iostream>
using namespace std;
int nSehat, nTidaksehat;
void input() {

	cout << "Masukan jumlah lokasi sehat = " << endl;
	cin >> nSehat;
	cout << "Masukan jumlah lokasi tidak sehat = " << endl;
	cin >> nTidaksehat;
}

int totalLokasi() {
	return nSehat + nTidaksehat;
}

void Display() {

	cout << endl;
	cout << "Jumlah lokasi sehat = " << nSehat << endl;
	cout << "Jumlah lokasi tidak sehat = " << nTidaksehat << endl;
	cout << endl;
	cout << "Total Lokasi = " << totalLokasi() << endl;
}

int main()
{
	string nama;
	int indeks, sensor;
	string status;
	string pilihan;

	cout << "Masukan nama kota : " << endl;
	cin >> nama;
	cout << "Masukan indeks kualitas udara : " << endl;
	cin >> indeks;
	cout << "Masukan nilai sensor : " << endl;
	cin >> sensor;

	if (indeks >= 75)
	{
		status = "Tidak Sehat";
	}
	else if (sensor >= 45)
	{
		status = "Tidak Sehat";
	}
	else
	{
		status = "Sehat";
	}
    cout << "Status = " << status << endl;

	cout << endl;
	cout << "\n Nama Kota : " << nama;
	cout << "\n Status : " << status << endl;
	cout << endl;
	
	input();
	totalLokasi();
	Display();

	cout << endl;
	do
	{
	    cout << "Apakah anda masih ingin mengulang program? (Yes/No)";
		cin >> pilihan;

	} while (pilihan == "Yes");
}




