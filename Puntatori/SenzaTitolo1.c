#include <stdio.h>
int main(){
	int a;
	int *p;
	a=10;
	p=&a;
	printf("Valore di a: %d, Valore di a puntato da *p: %d, Indirizzo hex di a: %p", a, *p, p);
}
