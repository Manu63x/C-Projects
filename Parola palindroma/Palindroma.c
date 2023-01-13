#include <stdio.h>
#define MAX_LUNGHEZZA	50
char s[]="anna";
int main(){
	int lunghezza;
	int i;
	int palindroma;
	int meta;
	i=0;
	lunghezza=0;
	while(s[lunghezza] != '\0')
		lunghezza++;
		
	palindroma=1;
	meta=lunghezza/2;
	
	for(i=0;i<meta && palindroma==1; i++){
		if(s[i] != s[lunghezza-1-i])
			palindroma=0;
	}
	if(palindroma)
		printf("\nLa parola %s: e' palindroma.", s);
	else
		printf("\nLa parola %s: non e' palindroma.", s);
	
}
