#include<stdio.h>
#include<stdlib.h>
#include"stack.c"
int main(int argc,char *argv[]){
	Stack s;
	int n=0;
	if(2!=argc){
		printf("Usage:	Binary number\n");
		return 0;
	}
	else{
	init(&s);
	n=atoi(argv[1]);
    while(n){
		push(&s,n%2);
		n/=2;
    }
	while(!empty(&s)){
		printf("%d",pop(&s));
	}
	}

}
