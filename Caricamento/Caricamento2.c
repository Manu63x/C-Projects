#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main(){
	int i=0;
	while(i!=10){
		printf("Caricamento .");
		sleep(1);
		system("CLS");
		printf("Caricamento ..");
		sleep(1);
		system("CLS");
		printf("Caricamento ...");
		sleep(1);
		system("CLS");
		i++;
	}
	printf("Finito!");
}
