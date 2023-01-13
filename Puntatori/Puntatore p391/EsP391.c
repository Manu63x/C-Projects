#include <stdio.h>
int main(){
	int a=2;
	int b;
	int *p;
	p=&a; //attribuisco al puntatore l'indirizzo di a
	b=*p; //assegno a b il valore della cella di memoria puntata da p
	printf("Var A: %d, Var B: %d, Puntatore: %d", a, b, *p); //stampo tutti i valori (saranno tutti uguali).
}
