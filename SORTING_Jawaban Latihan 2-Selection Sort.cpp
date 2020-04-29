/* 
Nama	: Ni Made Widiasanti
NIM		: 19051397002
Prodi	: D4 Manajemen Informatika 2019 A
Matkul	: Struktur Data - Sorting Latihan 1
*/

#include <iostream>

using namespace std;

int data[6] = {7, 19, 4, 8, 20, 1};
	int data2[6] = {7, 19, 4, 8, 20, 1};
    int n;

int tukar(int a, int b)
{
 int t;
 t = data[b];
 data[b] = data[a];
 data[a] = t;
}

int input(){
    cout << "Masukan Jumlah Data = "; // pada saat program sudah run, isi jumlah data = 6
	cin >> n;

	cout << endl;
}

int tampil()
{
	cout<<"\nData : \t"; 
	for (int i=0;i<n;i++)
	{
	     cout<<"["<<data[i]<<"] ";
	}
	cout<<endl;
}

int selection_sort()
{
	int pos, i, j;
 	for(i=1;i<=n-1;i++)
	{
	 pos = i;
	 for(j = i+1;j<=n;j++)
	 {
		if(data[j] < data[pos]) pos = j;
	  }
	  	if(pos != i)
	  {
		tukar(pos,i); 
	  }
	  tampil ();
	 }
}

int main()
  {
  	cout << "=======================" << endl;
  	cout <<"ALGORITMA SELECTION SORT" << endl;
  	cout <<"========================" << endl;
	input();
	cout<<"Proses Selection Sort"<<endl;
	tampil();
	selection_sort();
  return 0;
  }
