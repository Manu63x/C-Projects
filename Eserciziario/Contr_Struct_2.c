#include <stdio.h>
int main(){
	int i, num, inP=0, inD=0;
	for(i=0;i<10;i++){
		printf("\nInserisci un valore: ");
		scanf("%d", &num);
		if(i%2==0){
			inP+=num;	
		}else{
			inD+=num;
		}
		printf("\nSomma numeri indice pari: %d", inP);
		printf("\nSomma numeri indice dispari: %d", inD);
	}
	return 0;
}
