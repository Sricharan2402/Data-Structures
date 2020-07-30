typedef struct Job
{
	char Name[5];
	int btime;
}Job;

typedef struct Queue
{
	Job q[80];
	int front,rear,size;
}Queue;



Queue *initialize()
{
	Queue *t=malloc(sizeof(Queue));
	t->front=t->rear=-1;
	t->size=5;
	return t;
}


int isFull(Queue *Q)
{
	if((Q->rear==Q->size-1&&Q->front==0)||(Q->rear+1==Q->front))
		return 1;
	return 0;
}

int isEmpty(Queue *Q)
{
	if(Q->front==-1)
		return 1;
	return 0;
}


void enQueue(Queue *Q,Job x)
{
	if(isFull(Q))
		printf("Queue full!");
	else
	{
		if(Q->rear==-1)
		{	Q->front=0;Q->rear=0;}
		else if(Q->rear==Q->size)
			Q->rear=0;
		else
			Q->rear+=1;
		Q->q[Q->rear]=x;

	}
}



Queue *calcTime(Queue *Q1,Queue *Q2)
{
	int i,t1=0,t2=0;
	for(i=Q1->front;i<=Q1->rear;i++)
	{
		t1+=Q1->q[i].btime;
	}
	
	for(i=Q2->front;i<=Q2->rear;i++)
	{
		t2+=Q2->q[i].btime;
	}
	if(t1>t2)
		return Q2;
	else 
		return Q1;
}


void dispQ(Queue *Q)
{
	if(Q->front<=Q->rear)
	{
		for(int i=Q->front;i<=Q->rear;i++)
			printf("%s  %d\n",Q->q[i].Name,Q->q[i].btime);
	}
	else
	{
		for(int i=Q->front;i<Q->size;i++)
			printf("%s  %d\n",Q->q[i].Name,Q->q[i].btime);
		for(int j=0;j<=Q->rear;j++)
			printf("%s  %d\n",Q->q[j].Name,Q->q[j].btime);
	}
}
