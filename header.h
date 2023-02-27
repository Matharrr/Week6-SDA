#include "boolean.h"
#include <stdio.h>
#include <stdlib.h>
#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) (L).First
#define NNama(P) (P)->next_nama
#define NKota(P) (P)->next_kota
#define MAXCITY 10
#define MAXNAME 50

typedef char *infotype;
typedef struct tNamaList *Naddress;
typedef struct tNamaList
{
	infotype info;
	Naddress next;
} NamaList;
typedef struct tKotaList *Kaddress;
typedef struct tKotaList
{
	infotype info;
	Naddress next_nama;
	Kaddress next_kota;
} KotaList;
typedef struct{
	Kaddress First;
}List;


void CreateList(List *kota);

Naddress AlokasiNama(infotype X);

void DealokasiNama(Naddress P);

void InsertNLast(Naddress *P, infotype);

void InsertNAfter(Naddress *P, infotype);

void InsertNama(List *kota, infotype X, int add);

int SearchNamaPerKota(Naddress P, infotype X);

void CountNama(List kota, infotype X);

void DeleteNFirst(Kaddress *kota);

void DeleteNLast(Naddress *P);

void DeleteNAfter(Naddress *P);

void DeleteNama(List *kota, infotype X, int del);

void DeleteAll(Kaddress *kota);

Kaddress AlokasiKota(infotype X);

void DealokasiKota(Kaddress P);

boolean IsEmpty(List kota);

void InsertKLast(Kaddress *kota, infotype X);

void InsertKAfter(Kaddress *kota, infotype X);

void InsertKota(List *kota, infotype X);

Kaddress SearchKota(List kota, infotype X);

int CountKota(List kota);

void DeleteKFirst(List *kota);

void DeleteKLast(Kaddress *kota);

void DeleteKAfter(Kaddress *kota);

void DeleteKota(List *kota, int del);

void PrintData(List kota);

void menu();
