#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int gestoUT, gestoCOM, puntiUT, puntiCOM;
	srand(time(NULL));
	puntiUT=0;
	puntiCOM=0;
	do{
	do{
		printf("Inserisci un numero da 1 a 3 (Sasso=1, Carta=2, Forbice=3):");
		scanf("%d", &gestoUT);
	}while(gestoUT<1||gestoUT>3);
	gestoCOM=rand()%3+1;
	if(gestoCOM==1){
		printf("\nComputer lancia sasso!");
	}
	if(gestoCOM==2){
		printf("\nComputer lancia carta!");	
	}
	if(gestoCOM==3){
		printf("\nComputer lancia forbice!");
	}
	if(gestoUT==gestoCOM){
		printf("\nPari!");
	}else{
	//-----------------------------------
	if(gestoUT==1 && gestoCOM==2){
		printf("\nVince il computer!");
		puntiCOM++;
	}
	if(gestoUT==2 && gestoCOM==3){
		printf("\nVince il computer!");
		puntiCOM++;
	}
	if(gestoUT==3 && gestoCOM==1){
		printf("\nVince il computer!");
		puntiCOM++;
	}
	//-----------------------------------
	if(gestoUT==2 && gestoCOM==1){
		printf("\nVince l'utente!");
		puntiUT++;
	}
	if(gestoUT==3 && gestoCOM==2){
		printf("\nVince l'utente!");
		puntiUT++;
	}
	if(gestoUT==1 && gestoCOM==3){
		printf("\nVince l'utente!");
		puntiUT++;
	}
	}
	gestoUT=0;
	printf("\nPunti utente:%d.\nPunti computer:%d.\nVuoi fare un'altra partita (uscita con 1)?", puntiUT, puntiCOM);
	scanf("%d", &gestoUT);
	system("CLS");
	}while(gestoUT!=1);
}
