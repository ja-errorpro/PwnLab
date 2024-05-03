#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>

char name[50];

void initchal(){
	setvbuf(stdin,0,2,0);
	setvbuf(stdout,0,2,0);
	unsigned long addr = (unsigned long)&name & ~0xfff;
	mprotect((void *)addr, 0x1000, PROT_EXEC | PROT_READ | PROT_WRITE);
}

int main(){
	initchal();
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
