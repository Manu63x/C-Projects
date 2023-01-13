#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main(){
	int exit;
	printf("  =========================\n  = Keyboard Key Detector =\n  =========================\n\n +=== TEST ===+\n 0 = Program Exit.\n");
	while(exit!=1){
		if(GetKeyState('1') & 0x8000){
			printf("Button pressed: 1.   ");
			system("PAUSE");
		}
		if(GetKeyState('2') & 0x8000){
			printf("Button pressed: 2.   ");
			system("PAUSE");
		}
		if(GetKeyState('3') & 0x8000){
			printf("Button pressed: 3.   ");
			system("PAUSE");
		}
		if(GetKeyState('4') & 0x8000){
			printf("Button pressed: 4.   ");
			system("PAUSE");
		}
		if(GetKeyState('5') & 0x8000){
			printf("Button pressed: 5.   ");
			system("PAUSE");
		}
		if(GetKeyState('6') & 0x8000){
			printf("Button pressed: 6.   ");
			system("PAUSE");
		}
		if(GetKeyState('7') & 0x8000){
			printf("Button pressed: 7.   ");
			system("PAUSE");
		}
		if(GetKeyState('8') & 0x8000){
			printf("Button pressed: 8.   ");
			system("PAUSE");
		}
		if(GetKeyState('9') & 0x8000){
			printf("Button pressed: 9.   ");
			system("PAUSE");
		}
		if(GetKeyState('0') & 0x8000){
			printf("Button pressed: 0. Program exit...");
			sleep(1);
			exit=1;
		}
		if(GetKeyState('Q') & 0x8000){
			printf("Button pressed: Q.   ");
			system("PAUSE");
		}
		if(GetKeyState('W') & 0x8000){
			printf("Button pressed: W.   ");
			system("PAUSE");
		}
		if(GetKeyState('E') & 0x8000){
			printf("Button pressed: E.   ");
			system("PAUSE");
		}
		if(GetKeyState('R') & 0x8000){
			printf("Button pressed: R.   ");
			system("PAUSE");
		}
		if(GetKeyState('T') & 0x8000){
			printf("Button pressed: T.   ");
			system("PAUSE");
		}
		if(GetKeyState('Y') & 0x8000){
			printf("Button pressed: Y.   ");
			system("PAUSE");
		}
		if(GetKeyState('U') & 0x8000){
			printf("Button pressed: U.   ");
			system("PAUSE");
		}
		if(GetKeyState('I') & 0x8000){
			printf("Button pressed: I.   ");
			system("PAUSE");
		}
		if(GetKeyState('O') & 0x8000){
			printf("Button pressed: O.   ");
			system("PAUSE");
		}
		if(GetKeyState('P') & 0x8000){
			printf("Button pressed: P.   ");
			system("PAUSE");
		}if(GetKeyState('A') & 0x8000){
			printf("Button pressed: A.   ");
			system("PAUSE");
		}
		if(GetKeyState('S') & 0x8000){
			printf("Button pressed: S.   ");
			system("PAUSE");
		}
		if(GetKeyState('D') & 0x8000){
			printf("Button pressed: D.   ");
			system("PAUSE");
		}
		if(GetKeyState('F') & 0x8000){
			printf("Button pressed: F.   ");
			system("PAUSE");
		}
		if(GetKeyState('G') & 0x8000){
			printf("Button pressed: G.   ");
			system("PAUSE");
		}
		if(GetKeyState('H') & 0x8000){
			printf("Button pressed: H.   ");
			system("PAUSE");
		}
		if(GetKeyState('J') & 0x8000){
			printf("Button pressed: J.   ");
			system("PAUSE");
		}
		if(GetKeyState('K') & 0x8000){
			printf("Button pressed: K.   ");
			system("PAUSE");
		}
		if(GetKeyState('L') & 0x8000){
			printf("Button pressed: L.   ");
			system("PAUSE");
		}
		if(GetKeyState('Z') & 0x8000){
			printf("Button pressed: Z.   ");
			system("PAUSE");
		}
		if(GetKeyState('X') & 0x8000){
			printf("Button pressed: X.   ");
			system("PAUSE");
		}
		if(GetKeyState('C') & 0x8000){
			printf("Button pressed: C.   ");
			system("PAUSE");
		}
		if(GetKeyState('V') & 0x8000){
			printf("Button pressed: V.   ");
			system("PAUSE");
		}
		if(GetKeyState('B') & 0x8000){
			printf("Button pressed: B.   ");
			system("PAUSE");
		}
		if(GetKeyState('N') & 0x8000){
			printf("Button pressed: N.   ");
			system("PAUSE");
		}
		if(GetKeyState('M') & 0x8000){
			printf("Button pressed: M.   ");
			system("PAUSE");
		}
	}
}
