#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void hello(char *pstr);
int main(){
	hello("git");
	return 0;
}
void hello(char *pstr){
	printf("Hello %s!!!\n",pstr);
}
