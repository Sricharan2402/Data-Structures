#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"PolyImpl.h"

void main()
{	polyADT *t1=(polyADT *)malloc(sizeof(polyADT));
	polyADT *t2=(polyADT *)malloc(sizeof(polyADT));
	polyADT *t3;
	initialise(t1);
	initialise(t2);
	int ch;
	int val[10],exp[10],n,x[10]={0},y[10]={0},i;
	printf("Enter the number of terms for the polynomial :");
	scanf("%d",&n);
	term l;
	int u;
	for(i=0;i<n;i++)
	{	printf("Enter coeffiecient and power of term %d:",i+1);
		scanf("%d %d",&val[i],&exp[i]);
	}
	read(n,val,exp,t1);
	do
	{
		printf("\nMENU\n1.InsertFront\n2.InsertEnd\n3.Insert after a term\n4.Polynomial Addition\n5.Polynomial multiplication\n6.Degree of the polynomial\n7.Evaluate the polynomial\n8.Polynomial Simplification\n9.Exit\nEnter you choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("Enter the value and exp of the term to be added:");
					scanf("%d %d",&l.val,&l.exp);
					insertFront(t1,l);
					break;
			case 2:
					printf("Enter the value and exp of the term to be added:");
					scanf("%d %d",&l.val,&l.exp);
					insertEnd(t1,l);
					print(t1);
					break;
			case 3:	printf("Enter the value and exp of the term to be added:");
					scanf("%d %d",&l.val,&l.exp);
					printf("Enter the power of the term after which the above has to be added");
					scanf("%d",&u);
					insertAfterTerm(t1,l,u);
					break;
			case 4:
					printf("Enter the polynomial to be added\n");
					printf("Enter the number of terms for the polynomial :");
					scanf("%d",&n);
					for(i=0;i<n;i++)
					{	printf("Enter coeffiecient and power of term %d:",i+1);
						scanf("%d %d",&val[i],&exp[i]);
					}
					read(n,val,exp,t2);
					polyAdd(t1,t2);
					break;
			case 5:	printf("Enter the polynomial to be Multiplied\n");
					printf("Enter the number of terms for the polynomial :");
					scanf("%d",&n);
					for(i=0;i<n;i++)
					{	printf("Enter coeffiecient and power of term %d:",i+1);
						scanf("%d %d",&val[i],&exp[i]);
					}
					read(n,val,exp,t2);
					polyMul(t1,t2);
					break;
			case 6:	polyDegree(t1);
					break;
			case 7: polyEvaluate(t1);
					break;
			case 8:	polySimplify(t1);
					break;
			case 9:
					exit(0);
					break;
			default:
					printf("Invalid input\n");
		}
	}while(1);
}
