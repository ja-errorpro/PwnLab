#include <stdio.h>

char name[50];

int main(){
	setvbuf(stdout,0,2,0);
	puts("Input your name: ");
	read(0, name, 50);
	char str[20];
	puts("Try your best: ");
	gets(str);
	return 0;
}

// Use Ubuntu 16.04
// sudo apt install gcc-multilib
// gcc -m32 -fno-stack-protector -no-pie -zexecstack ret2sc.c -o ret2sc
