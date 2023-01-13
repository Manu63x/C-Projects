/*
* 1=somma
* 2=sottrazione
*/
double ope(double a, double b, int todo){
	double result;
	switch(todo){
		case 1:
			result=a+b;
		break;
		case 2:
			result=a-b;
		break;
		
		default:
		break;
	}
	return result;	
}
//#include funzione scritta sopra
#include <stdio.h>
int main(){
	double a, b;
	a=2.0;
	b=3.5;
	printf("La somma %.1f", ope(a,b,1));
}
