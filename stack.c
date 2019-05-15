#include "stack.h"
void init(Stack *s){
	s->top=-1;
}
int empty(Stack *s){
	return -1==s->top?1:0;
}
int size(Stack *s){
	return s->top+1;
}
void push(Stack *s,int n){
	if(s->top!=31)s->array[++s->top]=n;
	else printf("The stack is full!\n");
}
int pop(Stack *s){
	if(empty(s)) return -1;
	else
		s->top--;
		return s->array[s->top+1];
}
int top(Stack *s){
	return s->array[s->top];
}
