#include<stdio.h>

void greet(const char* name);
int main() {
    printf("Hello, World!\n");
    
    char n[]="Sumit";
    greet(n);
    return 0;
}           
void greet(const char* name){
    printf("Hello, %s! Welcome to your github portfolio\n",name);
}