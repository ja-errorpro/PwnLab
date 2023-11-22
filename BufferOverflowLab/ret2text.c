#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void win(){
	__asm__("pop %rax;");
	system("/bin/sh");
}
void vuln(){
	char str[32];
	printf("Input your name: ");
	gets(str);
	puts(str);

}
int main(){
	vuln();
	return 0;
}
