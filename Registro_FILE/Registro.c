//os detection
#if defined(_WIN32)
    #define PLATFORM_NAME 0 // Windows
#elif defined(__unix__)
    #define PLATFORM_NAME 1 // Unix
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXIT	5

typedef struct val{
	int gg, mm, aa;
	float voto;
	char mat[50+1];
}val;

int main(){
	FILE * fp;
	int sel;
	char c;
	val val_stud;
	char st_name[100+1];
	char sys_command[120+1];
	system("COLOR A");
	do{
		do{
			system("CLS");
			printf("Registro Elettronico\n\nScegli un'opzione:\n\n1)Visualizza i voti di uno studente.\n2)Inserisci un voto.\n3)Visualizza valutazioni in ordine per materia.\n4)Visualizza valutazioni in ordine per voto.\n\n>");
			scanf("%d", &sel);
			fflush(stdin);
		}while(sel<0||sel>4);
		switch(sel){
			case 1:
				system("CLS");
				printf("Inserisci nome studente: ");
				//student name input and add file extension to string
				scanf("%s", st_name);
				fflush(stdin);
				strcat(st_name,".txt");
				fp=fopen(st_name, "r");
				rewind(fp);
				printf("\n");
				//data read from stream
				while((c=fgetc(fp))!=EOF){
					printf("%c", c);
				}
				printf("\n");
				system("PAUSE");
				fclose(fp);
				break;
			case 2:
				system("CLS");
				printf("Inserisci nome studente: ");
				//student name input and add file extension to string
				scanf("%s", st_name);
				fflush(stdin);
				strcat(st_name,".txt");
				fp=fopen(st_name, "a");
				rewind(fp);
				printf("\nInserisci la materia: ");
				scanf("%s", val_stud.mat);
				fflush(stdin);
				printf("\nInserisci voto: ");
				scanf("%f", &val_stud.voto);
				fflush(stdin);
				printf("\nInserisci giorno: ");
				scanf("%d", &val_stud.gg);
				fflush(stdin);
				printf("\nInserisci mese: ");
				scanf("%d", &val_stud.mm);
				fflush(stdin);
				printf("\nInserisci anno: ");
				scanf("%d", &val_stud.aa);
				fflush(stdin);
				//write struct on file
				fprintf(fp,"%s %.2f %d/%d/%d\n", val_stud.mat, val_stud.voto, val_stud.gg, val_stud.mm, val_stud.aa);
				fclose(fp);
				break;
			case 3:
				system("CLS");
				printf("Inserisci nome studente: ");
				//student name input and add file extension to string
				scanf("%s", st_name);
				fflush(stdin);
				strcat(st_name,".txt");
				printf("\n");
				fp=fopen(st_name, "a");
				rewind(fp);
				//if statement for bash/dos command
				if(PLATFORM_NAME==0){
					snprintf(sys_command, sizeof(sys_command), "type %s | sort", st_name);
					system(sys_command);
				}else if(PLATFORM_NAME==1){
					snprintf(sys_command, sizeof(sys_command), "cat %s | sort", st_name);
					system(sys_command);
				}
				while((c=fgetc(fp))!=EOF){
					printf("%c", c);
				}
				printf("\n");
				system("PAUSE");
				fclose(fp);
				break;
			case 4:
				system("CLS");
				printf("Inserisci nome studente: ");
				//student name input and add file extension to string
				scanf("%s", st_name);
				fflush(stdin);
				strcat(st_name,".txt");
				printf("\n");
				fp=fopen(st_name, "a");
				rewind(fp);
				//sort voto
				
				
				
				
				printf("\n");
				system("PAUSE");
				fclose(fp);
				break;			
		}
	}while(sel!=EXIT);
}
