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

int tukar (int a,int b){
    int t;
    t=data[b];
    data[b]=data[a];
    data[a]=t;
}

int input(){
    cout<<"Masukan Jumlah Data = "; // pada saat program sudah run, isi jumlah data = 6
	cin>>n;

	cout<<endl;
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

int insertion_sort()
{
	 for(int i=1; i<=n; i++)
	 {
	  cout << data[i] << " ";
	 }
	 int temp, i, j;
	 for(i=1;i<=n;i++)
	 {
	  temp = data[i];
	  j = i -1;
	  while(data[j]>temp && j>=0)
	  {
	   data[j+1] = data[j];
	   j--;
	  }
	  
	  data[j+1] = temp;
	 } 
	 tampil ();
	 
	 cout << endl;
}

int main()
  {
  	cout << "=======================" << endl;
  	cout <<"ALGORITMA INSERTING SORT" << endl;
  	cout <<"========================" << endl;
	input();
	cout<<"Proses Insertion Sort"<<endl;
	tampil();
	insertion_sort();
  return 0;
  }
