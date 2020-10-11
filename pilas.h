#define TRUE 1
#define FALSE 0
#define STACKSIZE 100

typedef char STACKELEMENT;
typedef struct{
	int top;
	STACKELEMENT items[STACKSIZE];
}STACK;

void Clear(STACK *);
int Empty(STACK *);
int Full(STACK *);
STACKELEMENT Pop(STACK *);
void Push(STACK *, STACKELEMENT);
