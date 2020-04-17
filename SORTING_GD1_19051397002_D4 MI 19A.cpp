#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
	int x, a[100], i, t, j ,k;
	
	cout <<"Insertion Sort\n";
	cout << "Masukkan Banyak Bilangan = ";  cin >> x;
	
	for (i=1; i<=x; i++)
	{
		cout << "\n Bilangan ke-" << i << " : "; cin >> a[i];
	}
	cout << "\n\n data Sebelum diurutkan : ";
	
	for (i=1; i<=x; i++)
	{
		cout << " " << a[i];
	}
	cout << endl;
	
	for (i=1; i<=x; i++)
	{
		for (j=1; j<=i; j++)
		{
			if (a[i]>a[j])
			{
				t = a[i];
					a[i] = a[j];
					a[j] = t;
			}
		}
		cout << "\n # " << i << " : ";
		
		for (k=1; k<=i; k++)
		{
			cout << " " << a[k];
		}
	}
	cout << "\n\n data Setelah diurutkan secara descending : ";
	
	for (i=1; i<=x; i++)
	{
		cout << " " << a[i];
	}
	getch ();
}
