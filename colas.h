#define TRUE 1
#define FALSE 0
#define MAXQUEUE 100

typedef char QUEUELEMENT;

typedef struct{
	int front, rear;
	QUEUELEMENT items[MAXQUEUE];
}QUEUE;

void Make(QUEUE *);
int IsEmpty(QUEUE *);
QUEUELEMENT Remove(QUEUE *);
void Insert(QUEUE *, QUEUELEMENT);
