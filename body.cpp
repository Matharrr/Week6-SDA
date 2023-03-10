#include "header.h"
#include <stdio.h>

void CreateList(List *kota){
    First(*kota) = Nil;
}

Naddress AlokasiNama(infotype X){
    Naddress P = (Naddress)malloc(sizeof(Node));
    if (P != NULL) {
        P->info.nama = (char*)malloc((strlen(X.nama) + 1) * sizeof(char));
        if (P->info.nama != NULL) {
            strcpy(P->info.nama, X.nama);
            P->left = NULL;
            P->right = NULL;
        } else {
            free(P);
            P = NULL;
        }
    }
    return P;
}

void DealokasiNama(Naddress P){
    free(P);
}

void InsertNLast(Naddress *P, infotype X){
    Naddress temp = AlokasiNama(X);
    if (temp != NULL) {
        if (*P == NULL) {
            *P = temp;
        } else {
            Naddress last = *P;
            while (last->next != NULL) {
                last = last->next;
            }
            last->next = temp;
        }
    }
}

void InsertNAfter(Naddress *P, infotype X){
    Naddress NewNode = AlokasiNama(X);
    if (NewNode != NULL) {
        if (*P == NULL) {
            *P = NewNode;
        } else {
            Naddress Q = *P;
            while (Q->next != NULL) {
                Q = Q->next;
            }
            NewNode->prev = Q;
            Q->next = NewNode;
        }
    }
}

void InsertNama(List *kota, infotype X, int add){
    // Jika list kosong atau insert di awal
    if(IsEmpty(*kota) || add == 1){
        AlokasiNama(&X);
        InsertFirst(kota, X);
    }
    // Jika insert di akhir
    else if(add > CountNama(*kota)){
        AlokasiNama(&X);
        InsertLast(kota, X);
    }
    // Jika insert di tengah
    else{
        address P = FirstNama(*kota);
        int i = 1;
        while(i < add - 1 && NextNama(P) != NULL){
            P = NextNama(P);
            i++;
        }
        if(P != NULL){
            AlokasiNama(&X);
            InsertAfter(&P, X);
        }
    }
    // Jika jumlah penduduk di atas maksimal
    if(CountNama(*kota) > MAXNAME){
        printf("Jumlah penduduk melebihi kapasitas maksimal.\n");
        DelLastNama(kota);
    }
}

int SearchNamaPerKota(Naddress P, infotype X){
    int count = 0;
    while (P != NULL) {
        if (strcmp(P->info.nama, X.nama) == 0) {
            count++;
        }
        P = P->next;
    }
    return count;
}

void CountNama(List kota, infotype X){
    int count = 0;
    Naddress P = First(kota);
    while (P != NULL) {
        if (strcmp(Info(P).nama, X.nama) == 0) {
            count++;
        }
        P = Next(P);
    }
    printf("Jumlah penduduk dengan nama %s adalah %d\n", X.nama, count);
}

void DeleteNFirst(Kaddress *kota){
    Naddress P;
    if(!IsEmpty((*kota).data)) {
        P = First((*kota).data);
        if (Next(P) == Nil) {
            First((*kota).data) = Nil;
            DealokasiNama(P);
        } else {
            First((*kota).data) = Next(P);
            Prev(First((*kota).data)) = Nil;
            Next(P) = Nil;
            DealokasiNama(P);
        }
    }
}

void DeleteNLast(Naddress *P){
    Naddress last = *P;
    Naddress prev = NULL;
    
    // mencari elemen terakhir dan elemen sebelumnya
    while (last->next != NULL) {
        prev = last;
        last = last->next;
    }
    
    // menghapus elemen terakhir
    if (prev == NULL) {
        *P = NULL;
    } else {
        prev->next = NULL;
    }
    
    // dealokasi elemen yang dihapus
    DealokasiNama(last);
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
