#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int data[10], data2[20];
int n;

void tukar (int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void bubble_sort ()
{
	for (int i=1; i<n; i++)
	{
		for (int j=n-1; j>=i; j--)
		{
			if (data[j] < data[j-1])
				tukar(j, j-1);
		}
	}
	printf("bubble sort selesai!\n");
}

void selection_sort ()
{
	int pos, i, j;
	for (i=0; i<n-1; i++)
	{
		pos = i;
		for (j = i+1; j<n; j++)
		{
			if (data[j] < data[pos])
			pos = j;
		}
		if (pos != i) tukar (pos, i);
	}
	printf("selection sort selesai!\n");
}

void insertion_sort ()
{
	int temp, i, j;
	for (i=1; i<n; i++)
	{
		temp = data[i];
		j = i-1;
		while(data[j] > temp && j >=0)
		{
			data[j+1] = data[j];
			j--;
		}
		data[j+1] = temp;
	}
	printf("insertion sort selesai!\n");
}

void Input ()
{
	printf("Masukkan jumlah data = ");
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		printf("Masukkan data ke-%d = ", (i+1));
		scanf("%d", &data[i]);
		data2[i] = data[i];
	}
}

void AcakLagi ()
{
	for (int i=0; i<n; i++)
	{
		data[i] = data2[i];
	}
	printf("Data sudah teracak\n");
}

void Tampil ()
{
	printf("Data : ");
	for (int i=0; i<n; i++)
	{
		printf("%d", data[i]);
	}
	printf("\n");
}

main () 
{
//clrscr();
	int pil;
	do
	{
		//clrscr();
		printf("1. Input Data\n");
		printf("2. Bubble Sort\n");
		printf("3. Selection Sort\n");
		printf("4. Tampilkan Data\n");
		printf("5. Acak\n");
		printf("0. Exit\n");
		printf("Pilihan = ");
		scanf("%d", &pil);
		switch(pil)
		{
			case 1: Input(); break;
			case 2: bubble_sort(); break;
			case 3: selection_sort(); break;
			case 4: Tampil(); break;
			case 5: AcakLagi(); break;
		}
		getch();
	}
	while(pil!=0);
}
