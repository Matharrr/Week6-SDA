#include "header.h"
#include <stdio.h>

void CreateList()
{
	
}

Naddress AlokasiNama()
{
	
}

void DealokasiNama()
{
	
}

void InsertNLast()
{
	
}

void InsertNAfter()
{
	
}

void InsertNama()
{
	
}

int SearchNamaPerKota()
{
	
}

void CountNama()
{
	
}

void DeleteNFirst()
{
	
}

void DeleteNLast()
{
	
}

void DeleteNAfter()
{
	
}

void DeleteNama()
{
	
}

void DeleteAll()
{
	
}

Kaddress AlokasiKota()
{
	
}

void DealokasiKota()
{
	
}

boolean IsEmpty()
{
	
}

void InsertKLast()
{
	
}

void InsertKAfter(){
	
}

void InsertKota()
{
	
}

Kaddress SearchKota()
{
	
}

int CountKota()
{
	
}

void DeleteKFirst()
{
	
}

void DeleteKLast()
{
	
}

void DeleteKAfter()
{
	
}

void DeleteKota()
{
	
}

void PrintData(List data)
{
	int i=0;
	Kaddress X = First(data);
	Naddress Y;
	while(X != Nil){
		printf ("%d. %s", i+1, Info(X));
		Y = NNama(X);
		if (Y == Nil)
			printf("Kota kosong...");
		else 
			while (Y != Nil){
				printf(" %s ", Info(Y));
				Y = Next(Y);
			}
		X = NKota(X);
		i++;
	}
}

void menu()
{
	printf("Main Menu\n");
	printf("1. Tampil Data\n");
	printf("2. Tambah Kota\n");
	printf("3. Hapus Kota\n");
	printf("4. Tambah Orang\n");
	printf("5. Hapus Orang\n");
	printf("6. Cari Orang\n");
	printf("7. Keluar\n");
}
