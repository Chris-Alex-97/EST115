#include "pilas.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void Clear(STACK * ps){
	ps->top=-1;
}

int Empty(STACK * ps){
	if(ps->top == -1)
		return(TRUE);
	else
		return(FALSE);
}

int Full(STACK * ps){
	if(ps->top == STACKSIZE-1)
		return(TRUE);
	else
		return(FALSE);
}

void Push(STACK * ps, STACKELEMENT x){
	if(Full(ps)){
		printf("%s","Pila desbordada");
		exit(1);
	}
	else
		ps->items[++(ps->top)] = x;
}

STACKELEMENT Pop(STACK * ps){
	if(Empty(ps)){
		printf("%s","Pila subdesbordada");
		exit(1);
	}
	else
		return(ps->items[(ps->top)--]);
}
