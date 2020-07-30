#include<stdio.h>
#include<stdlib.h>
#include"CQueueV2.h"

void main()
{
	Queue *Q1=initialize(),*Q2=initialize();
	
	int n;
	printf("Enter the no.of jobs: ");
	scanf("%d",&n);
	
	Job J[20];
	for(int i=0;i<n;i++)
	{
		printf("\nJob %d\nName: ",i+1);
		scanf(" %[^\n]",J[i].Name);
		printf("Burst time: ");
		scanf("%d",&J[i].btime);
	}	

	int i=0;
	while(i<n)
	{
		if(isEmpty(Q1)&&isEmpty(Q2))
			enQueue(Q1,J[i]);
		else 
			enQueue(calcTime(Q1,Q2),J[i]);
		i+=1;
	}
	printf("\nQueue 1:\n");
	dispQ(Q1);
	printf("\nQueue 2:\n");
	dispQ(Q2);
}


/*
Output:

Job 1
Name: A
Burst time: 3

Job 2
Name: B
Burst time: 1

Job 3
Name: C
Burst time: 6

Job 4
Name: D
Burst time: 3

Job 5
Name: E
Burst time: 9

Job 6
Name: F
Burst time: 2

Job 7
Name: G
Burst time: 7

Job 8
Name: G
Burst time: 8

Queue 1:
A  3
D  3
E  9
G  8

Queue 2:
B  1
C  6
F  2
G  7

*/