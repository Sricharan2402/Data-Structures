typedef struct Queue
{
	int q[80];
	int front,rear,size;
}Queue;



Queue *initialize()
{
	Queue *t=malloc(sizeof(Queue));
	t->front=t->rear=-1;
	t->size=50;
	return t;
}


int isFull(Queue *Q)
{
	if(Q->rear==Q->size)
		return 1;
	return 0;
}

int isEmpty(Queue *Q)
{
	if(Q->front==-1)
		return 1;
	return 0;
}


void enQueue(Queue *Q,int x)
{
	if(isFull(Q))
		printf("Queue full!");
	else
	{
		if(Q->rear==-1)
		{	Q->front=0;Q->rear=0;}
		else
			Q->rear+=1;
		Q->q[Q->rear]=x;

	}
}


int deQueue(Queue *Q)
{
	if(isEmpty(Q))
		return -1;
	else
	{
		int t=Q->q[Q->front];
		if(Q->front==Q->rear)
		{	Q->front=-1;Q->rear=-1;}
		else
			Q->front+=1;
		return t;
	}
}



void dispQ(Queue *Q)
{
	printf("\nQueue:\n\t");
	for(int i=Q->front;i<=Q->rear;i++)
		printf("%d ",Q->q[i]);
}
