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


void CreateList();

Naddress AlokasiNama();

void DealokasiNama();

void InsertNLast();

void InsertNAfter();

void InsertNama();

int SearchNamaPerKota();

void CountNama();

void DeleteNFirst();

void DeleteNLast();

void DeleteNAfter();

void DeleteNama();

void DeleteAll();

Kaddress AlokasiKota();

void DealokasiKota();

boolean IsEmpty();

void InsertKLast();

void InsertKAfter();

void InsertKota();

Kaddress SearchKota();

int CountKota();

void DeleteKFirst();

void DeleteKLast();

void DeleteKAfter();

void DeleteKota();

void PrintData();

void menu();
