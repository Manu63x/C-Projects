#include <stdio.h>
int main(){
	int i=0;
	int lines=0;
	int c;
	FILE *fp=fopen("unitbase.dat","rb");
	fseek(fp,0,SEEK_SET);
	while(!feof(fp)){
		c=fgetc(fp);
		if(i%15==0){
			printf("\n%d\t%x\t", lines, c);
		}else{
			printf("%x\t", c);	
		}
		i++;
		if(i%15==0){
			lines++;
		}
	}
	fclose(fp);
	return 0;
}
