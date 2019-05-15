#ifndef STACK_H
#define STACK_H
#include<stdio.h>
typedef struct{
	int array[32];
	int top;	
}Stack;
void init(Stack *s);
int empty(Stack *s);
int size(Stack *s);
void push(Stack *s,int n);
int pop(Stack *s);
int top(Stack *s);

#endif