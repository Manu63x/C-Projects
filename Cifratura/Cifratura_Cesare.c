char crypt(char a[], int offset){
	int i=0;
	while(a[i]!='\0'){
		a[i]=a[i]+offset;
		i++;
	}
}
char decrypt(char a[], int offset){
	int i=0;
	while(a[i]!='\0'){
		a[i]=a[i]-offset;
		i++;
	}
}
#include <stdio.h>
int main(){
	char parola[51];
	int offset, i;
	printf("Inserisci la parola da criptare: ");
	scanf("%s", &parola);
	fflush(stdin);
	printf("Inserisci l'offset: ");
	scanf("%d", &offset);
	fflush(stdin);
	crypt(parola, offset);
	printf("Parola criptata: %s", parola);
	printf("\nInsersci parola da decriptare: ");
	scanf("%s", &parola);
	fflush(stdin);
	printf("Inserisci l'offset: ");
	scanf("%d", &offset);
	fflush(stdin);
	decrypt(parola, offset);
	printf("Parola decriptata: %s", parola);
}
