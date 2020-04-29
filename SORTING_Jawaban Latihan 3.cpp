/* 
Nama	: Ni Made Widiasanti
NIM		: 19051397002
Prodi	: D4 Manajemen Informatika 2019 A
Matkul	: Struktur Data - Sorting Latihan 1
*/

#include <iostream>
#include <conio.h>

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
    cout << "Masukan Jumlah Data = "; // pada saat program sudah run, isi jumlah data = 6
	cin >> n;

	cout << endl;
}

int tampil()
{
	cout << "\nData : \t"; 
	for (int i=0;i<n;i++)
	{
	    cout << "[" << data[i] << "] ";
	}
	cout << endl;
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
	  
	  cout << endl;
	 }
}

int bubble_sort(){
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (data[j]<data[j-1]){
				tukar(j,j-1);
			}
		}
		tampil();
	}
	cout<<endl;
}

int main()
  {
  	cout << "======================================================" << endl;
  	cout << "ALGORITMA INSERTION SORT, SELECTION SORT, DAN BUBBLE SORT" << endl;
  	cout << "======================================================" << endl;
	input();
	cout << "Proses Insertion Sort" << endl;
	tampil();
	insertion_sort();
	input();
	cout << "Proses Selection Sort" << endl;
	tampil();
	selection_sort();
	cout << "Proses Bubble Sort" << endl;
	tampil();
	bubble_sort();
  return 0;
  }
