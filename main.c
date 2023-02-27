#include <stdio.h>
#include <stdlib.h>
#include "body.cpp"

int main(){
	int Imenu;
	List listhubung;
	infotype isi;
	while(1){
		menu();
		scanf("%d", &Imenu);
		switch (Imenu){
			case 1 :
				if(IsEmpty(listhubung) == true)
					printf("\nlist masih kosong");
				else
					PrintData(listhubung);
				printf("tekan apa saja");
				getch();
				system("cls");
				break;
			case 2 :
				isi = (infotype) malloc(MAXCITY);
				
				if (isi != Nil){
					printf("Masukan Nama kota");
					scanf("%s", isi);
					if (SearchKota(listhubung, isi) == Nil){
						insertKota(&listhubung, isi);
					}else{
						system("cls");
						printf("Kota sudah ada");
					}
				}else{
					printf("Kota sudah penuh");
				}
				break;
			case 3 :
				break;
			case 4 :
				break;
			case 5 :
				break;
			case 6 :
				break;
			case 7 :
				printf("\nTerima kasih");
				
				exit(0);
				break;
			default :
				printf("\nOpsi tidak valid");
				break;
		}
	}
	return 0;
}
