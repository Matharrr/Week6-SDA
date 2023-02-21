#include "boolean.h"
#include <stdio.h>
#include <stdlib.h>
#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) (L).First
#define NNama(P) (P)->next_nama
#define NKota(P) (P)->next_kota

typedef char *infotype;
typedef struct tKotaList *Kaddress;
typedef struct tKotaList
{
	infotype info;
	address next_nama;
	adresss next_kota;
} KotaList;
typedef struct tNamaList *Naddress;
typedef struct tNamaList
{
	infotype info;
	address next;
} NamaList;

void CreateList();

naddress AlokasiNama();

void DealokasiNama();

void InsertNLast();

void InsertNAfter();

void InsertNama();

int SearchNamaPerKota();

void CountNama():

void DeleteNFirst();

void DeleteNLast();

void DeleteNAfter();

void DeleteNama();

void DeleteAll();

kaddress AlokasiKota();

void DealokasiKota();

boolean IsEmpty();

void InsertKLast();

void InsertKAfter();

void InsertKota();

kaddress SearchKota();

int CountKota();

void DeleteKFirst();

void DeleteKLast();

void DeleteKAfter();

void DeleteKota();

void PrintData();

void menu();
