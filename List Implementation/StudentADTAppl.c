

// StudentADTInter.h

/*
typedef struct Student
{
	int regNo;
	char Name[80];
	int M1,M2,M3,Total;
	char Result;	
}Student;

typedef struct ListADT
{
	Student S[80];
	int size;
}ListADT;

void dispRecs(ListADT *L);
void dispRec(Student S);
void initialize(ListADT *l);
void acceptDetails(Student *S);
void insertFront(ListADT *l,Student S);
void insertEnd(ListADT *l,Student S);
void insertRegno(ListADT *l,Student S,int );
Student* searchRegno(ListADT *l,int );
ListADT* searchName(ListADT *l,char Name[]);
void Delete(ListADT *l,int );
void computeResult(ListADT *l);
ListADT* listResult(ListADT *l);
int listClass(ListADT *l);
*/



//
//
//StudentADTImpl.h
//
//


/*
void dispRecs(ListADT *L)
{
	for(int i=0;i<L->size;i++)
		dispRec(L->S[i]);

}


void dispRec(Student S)
{
	printf("\n\tName: %s  Regno: %d",S.Name,S.regNo);
}

void initialize(ListADT *l)
{
	l->size=0;
}


void acceptDetails(Student *S)
{
	printf("\nEnter Student details: ");
	printf("\nName: ");
	scanf(" %[^\n]",S->Name);
	printf("Regno: ");
	scanf("%d",&(S->regNo));
	printf("Mark 1: ");
	scanf("%d",&(S->M1));
	printf("Mark 2: ");
	scanf("%d",&(S->M2));
	printf("Mark 3: ");
	scanf("%d",&(S->M3));

}

void insertFront(ListADT *l,Student S)
{
	int i,j;
	
	l->size+=1;
	for(i=l->size;i>0;i--)
		l->S[i]=l->S[i-1];
	l->S[i]=S;
	printf("\n\nThe updated list is: ");
	for( i=0;i<l->size;i++)
	{
		dispRec(l->S[i]);
	}
	
	
}

void insertEnd(ListADT *l,Student S)
{
	int i,j;
	
	l->S[l->size]=S;
	l->size+=1;
	printf("\n\nThe updated list is: ");
	for( i=0;i<l->size;i++)
	{
		dispRec(l->S[i]);
	}
	
}

void insertRegno(ListADT *l,Student S,int regNum)
{
	int i,j;
	
	for( i=0;i<l->size;i++)
	{
		if(l->S[i].regNo==regNum)
		{
			for( j=l->size;j>i+1;j--)
				l->S[j]=l->S[j-1];
			l->S[j]=S;
			l->size+=1;
			
		}
	}
	printf("\n\nThe updated list is: ");
	for( i=0;i<l->size;i++)
	{
		dispRec(l->S[i]);
	}
	
}

Student* searchRegno(ListADT *l,int regNum)
{
	int i,j;
	Student *S=NULL;
	for( i=0;i<l->size;i++)
	{
		if(l->S[i].regNo==regNum)
		{
			S=&(l->S[i]);
			
		}
	}
	
	return S;
}


ListADT* searchName(ListADT *l,char Name[])
{
	int i,j;
	ListADT *Tmp;
	Tmp=malloc(sizeof(struct ListADT));
	initialize(Tmp);
	for(i=0;i<l->size;i++)
	{
		if(strcmp(l->S[i].Name,Name)==0)
		{
			Tmp->S[Tmp->size]=l->S[i];
			Tmp->size+=1;
		}
	}
	if(Tmp->size)
		return Tmp;
	else
		return NULL;}
	
void deleteRecord(ListADT *l,int regNum)
{
	int i,j,flag=0;
	
	for( i=0;i<l->size;i++)
	{
		if(l->S[i].regNo==regNum)
		{
			printf("\n\nThe deleted record is: ");
			dispRec(l->S[i]);
			for(j=i;j<l->size-1;j++)
				l->S[j]=l->S[j+1];
			l->size-=1;
			flag=1;
		}
	}
	
	if(flag)
	{
		printf("\n\nThe updated list is: ");
		for(int i=0;i<l->size;i++)
		{
			dispRec(l->S[i]);
		}
	}
	else
		printf("\n\nThe record was not found");
}

void computeResult(ListADT *l)
{
	int i,j;
	for( i=0;i<l->size;i++)
	{
		l->S[i].Total=l->S[i].M1+l->S[i].M2+l->S[i].M3;
		if(l->S[i].M1<50 || l->S[i].M2<50 || l->S[i].M3<50)
			l->S[i].Result='F';
		else 
		{
			if(l->S[i].M1>80 && l->S[i].M2>80 && l->S[i].M3>80)
				l->S[i].Result='D';
			else
				l->S[i].Result='P';
		}
	}
	for(i=0;i<l->size;i++)
		printf("\nName: %s  Regno: %d Total: %d Result: %c",l->S[i].Name,l->S[i].regNo,l->S[i].Total,l->S[i].Result);

	
}

ListADT* listResult(ListADT *l)
{
	ListADT *Tmp;
	Tmp=malloc(sizeof(struct ListADT));
	initialize(Tmp);
	for(int i=0;i<l->size;i++)
	{
		if(!(l->S[i].Result=='F'))
		{
			Tmp->S[Tmp->size]=l->S[i];
			Tmp->size+=1;
		}
	}
	if(Tmp->size)
		return Tmp;
	else
		return NULL;
}

int listClass(ListADT *l)
{
	int counter=0,i;
	for(i=0;i<l->size;i++)
	{
		if(l->S[i].Result=='D')
		{
			counter+=1;
		}
	}
	return counter;
}
*/



//
//
// MAIN APPLICATION
//
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"StudentADTInter.h"
#include"StudentADTImpl.h"




void main()
{
	ListADT l,*L;
	initialize(&l);
	char Name[80];
	int y=1,ch,t,regNum;
	Student *S,S1;
	do
	{
		printf("\n\nMenu:\n\t1.insertFront\n\t2.insertEnd\n\t3.insertRegno\n\t4.searchRegno\n\t5.searchName\n\t6.deleteRecord\n\t7.computeResult\n\t8.listResult\n\t9.listClass\n\t10.Exit");
		printf("\nChoice: ");
		scanf("%d",&ch);
			
		switch(ch)
		{
			case 1:
					acceptDetails(&S1);
					insertFront(&l,S1);
					break;
			case 2:
					acceptDetails(&S1);
					insertEnd(&l,S1);
					break;
			case 3:
					acceptDetails(&S1);
					printf("\nEnter the Regno: ");
					scanf("%d",&regNum);
					insertRegno(&l,S1,regNum);
					break;
			case 4:
					printf("\nEnter the Regno: ");
					scanf("%d",&regNum);
					S=searchRegno(&l,regNum);
					if(S==NULL)
						printf("\n\nThe record was not found!!");
					else					
						dispRec(*S);
					break;
			case 5:
					printf("\nEnter the Name: ");
					scanf(" %[^\n]",Name);
					L=searchName(&l,Name);
					if(L==NULL)
						printf("\n\nThe record was not found!!");
					else					
						dispRecs(L);					
					break;
			case 6:
					printf("\nEnter the Regno: ");
					scanf("%d",&regNum);
					deleteRecord(&l,regNum);
					break;
			case 7:
					computeResult(&l);
					break;
			case 8:
					L=listResult(&l);
					if(L==NULL)
						printf("\n\nNone of the students have passed!!");
					else					
						dispRecs(L);					
					break;
			case 9:
					t=listClass(&l);
					printf("\n%d student(s) have/has secured first class ",t);
					break;
			default:
					y=0;
					break;
		}
		
			
	}while(y);
}



/*

Output:

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 1

Enter Student details: 
Name: Avinash
Regno: 30 
Mark 1: 99
Mark 2: 100
Mark 3: 99


The updated list is: 
	Name: Avinash  Regno: 30

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 2

Enter Student details: 
Name: Ajay Bhat
Regno: 012
Mark 1: 99
Mark 2: 100
Mark 3: 99


The updated list is: 
	Name: Avinash  Regno: 30
	Name: Ajay Bhat  Regno: 12

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 3

Enter Student details: 
Name: Sricharan
Regno: 163
Mark 1: 45
Mark 2: 78
Mark 3: 89

Enter the Regno: 30


The updated list is: 
	Name: Avinash  Regno: 30
	Name: Sricharan  Regno: 163
	Name: Ajay Bhat  Regno: 12

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 4

Enter the Regno: 163

	Name: Sricharan  Regno: 163

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 4

Enter the Regno: 123


The record was not found!!

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 5

Enter the Name: Ajay


The record was not found!!

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 5

Enter the Name: Ajay Bhat

	Name: Ajay Bhat  Regno: 12

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 6

Enter the Regno: 12


The deleted record is: 
	Name: Ajay Bhat  Regno: 12

The updated list is: 
	Name: Avinash  Regno: 30
	Name: Sricharan  Regno: 163

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 7

Name: Avinash  Regno: 30 Total: 298 Result: D
Name: Sricharan  Regno: 163 Total: 212 Result: F

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 8

	Name: Avinash  Regno: 30

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 9

1 student(s) have/has secured first class 

Menu:
	1.insertFront
	2.insertEnd
	3.insertRegno
	4.searchRegno
	5.searchName
	6.deleteRecord
	7.computeResult
	8.listResult
	9.listClass
	10.Exit
Choice: 10


*/

