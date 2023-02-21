#include <stdio.h>
#include <stdlib.h>
#include "body.cpp"

int main(){
	int Imenu;
	List listhubung;
	while(1){
		menu();
		scanf("%d", &Imenu);
		switch (Imenu){
			case 1 :
				if(IsEmpty(listhubung) == true)
					printf("\nlist masih kosong");
				else
					
				break;
			case 2 :
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
