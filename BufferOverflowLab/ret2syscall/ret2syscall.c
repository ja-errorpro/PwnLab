#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *s = "/bin/sh";
void initchal(){
    setvbuf(stdin, 0, 2, 0);
    setvbuf(stdout, 0, 2, 0);    
}

int main(int argc, const char** argv, const char **envp){
    int a;

    initchal();
    puts("There is no system!!");
    puts("Can you hack me?");
    gets(&a);
    return 0;
}

// gcc -fno-stack-protector -no-pie -static ret2syscall.c -o ret2syscall
