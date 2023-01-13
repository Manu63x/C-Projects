#include <iostream>
#include <Windows.h>
#include <unistd.h>

using namespace std;

int main(){
	sleep(2);
	keybd_event('C', 0, 0, 0);
	keybd_event('A', 0, 0, 0);
	keybd_event('C', 0, 0, 0);
	keybd_event('C', 0, 0, 0);
	keybd_event('A', 0, 0, 0);
}
