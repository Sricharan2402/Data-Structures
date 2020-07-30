#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Inter.h"
#include"Impl.h"

void main()
{	
	int y=1,c=0;
	Person P;
	long int pArr[80];
	PerADT *L=initialize();
	do{
	printf("\n\nMenu:\n1.insFront\n2.insBack\n3.insPIN\n4.Display\n5.searchSenior\n6.searchLoc\n7.genRatio\n8.Sort\n9.Exit\nChoice: ");
	scanf("%d",&y);
		
	if(y==1)
	{
		printf("\n\nEnter the Details:\n\n");
		printf("Name: ");scanf(" %[^\n]",P.Name);
		printf("Age: ");scanf("%d",&P.Age);	
		printf("Address: ");scanf(" %[^\n]",P.Add);
		printf("City: ");scanf(" %[^\n]",P.City);
		printf("Phno.: ");scanf(" %[^\n]",P.Phno);
		printf("Gender: ");scanf(" %[^\n]",P.Sex);
		P.PIN=PIN(pArr,&c);
		c+=1;
		insertFront(L,P);
	}
	else if(y==2)	
	{
		printf("\n\nEnter the Details:\n\n");
		printf("Name: ");scanf(" %[^\n]",P.Name);
		printf("Age: ");scanf("%d",&P.Age);	
		printf("Address: ");scanf(" %[^\n]",P.Add);
		printf("City: ");scanf(" %[^\n]",P.City);
		printf("Phno.: ");scanf(" %[^\n]",P.Phno);
		printf("Gender: ");scanf(" %[^\n]",P.Sex);
		P.PIN=PIN(pArr,&c);
		c+=1;	
		insertBack(L,P);
	}
	else if(y==3)
	{
		printf("\n\nEnter the Details:\n\n");
		printf("Name: ");scanf(" %[^\n]",P.Name);
		printf("Age: ");scanf("%d",&P.Age);	
		printf("Address: ");scanf(" %[^\n]",P.Add);
		printf("City: ");scanf(" %[^\n]",P.City);
		printf("Phno.: ");scanf(" %[^\n]",P.Phno);
		printf("Gender: ");scanf(" %[^\n]",P.Sex);
		P.PIN=PIN(pArr,&c);
		c+=1;
		long int PIN;
		printf("\nEnter the PIN: ");
		scanf("%ld",PIN);
		insertPIN(L,P,PIN);
	}
	else if(y==4)
	{
		dispList(L);
	}
	else if(y==5)
	{
		PerADT *l=senList(L);
		dispList(L);
	}
	else if(y==6)
	{
		char loc[80];
		printf("\nEnter the location: ");
		scanf(" %[^\n]",loc);
		PerADT *l=locatePer(L,loc);
		dispList(L);
	}
	else if(y==7)
	{
		genRatio G=Ratio(L);
		printf("The current Sex ratio is: %d/%d",G.MC,G.FC);
	}
	else if(y==8)
	{
		sortList(L);
	}
	}while(y!=9);
}


/*
Output:


Menu:
1.insFront
2.insBack
3.insPIN
4.Display
5.searchSenior
6.searchLoc
7.genRatio
8.Sort
9.Exit
Choice: 1


Enter the Details:

Name: Sreyas
Age: 17
Address: kk
City: che
Phno.: 45678
Gender: Male


Menu:
1.insFront
2.insBack
3.insPIN
4.Display
5.searchSenior
6.searchLoc
7.genRatio
8.Sort
9.Exit
Choice: 2


Enter the Details:

Name: Srivaths
Age: 19
Address: porur
City: che
Phno.: 8765678
Gender: Male


Menu:
1.insFront
2.insBack
3.insPIN
4.Display
5.searchSenior
6.searchLoc
7.genRatio
8.Sort
9.Exit
Choice: 4


Details of the employees:

Name: Sreyas
Gender: Male
Age: 17
Address: kk
PIN: 10041
Phno: 45678

Name: Srivaths
Gender: male
Age: 19
Address: porur
PIN: 28467
Phno: 8765678


Reverse Order:

Name: Srivaths
Gender: male
Age: 19
Address: porur
PIN: 28467
Phno: 8765678

Name: Sreyas
Gender: Male
Age: 17
Address: kk
PIN: 10041
Phno: 45678

Menu:
1.insFront
2.insBack
3.insPIN
4.Display
5.searchSenior
6.searchLoc
7.genRatio
8.Sort
9.Exit
Choice: 6

Enter the location: che


Details of the employees:

Name: Sreyas
Gender: Male
Age: 17
Address: kk
PIN: 10041
Phno: 45678

Name: Srivaths
Gender: male
Age: 19
Address: porur
PIN: 28467
Phno: 8765678


Reverse Order:

Name: Srivaths
Gender: male
Age: 19
Address: porur
PIN: 28467
Phno: 8765678

Name: Sreyas
Gender: Male
Age: 17
Address: kk
PIN: 10041
Phno: 45678

Menu:
1.insFront
2.insBack
3.insPIN
4.Display
5.searchSenior
6.searchLoc
7.genRatio
8.Sort
9.Exit
Choice: 7
The current Sex ratio is: 0/2

Menu:
1.insFront
2.insBack
3.insPIN
4.Display
5.searchSenior
6.searchLoc
7.genRatio
8.Sort
9.Exit
Choice: 8


Details of the employees:

Name: Sreyas
Gender: Male
Age: 17
Address: kk
PIN: 10041
Phno: 45678

Name: Srivaths
Gender: male
Age: 19
Address: porur
PIN: 28467
Phno: 8765678


Reverse Order:

Name: Srivaths
Gender: male
Age: 19
Address: porur
PIN: 28467
Phno: 8765678

Name: Sreyas
Gender: Male
Age: 17
Address: kk
PIN: 10041
Phno: 45678

Menu:
1.insFront
2.insBack
3.insPIN
4.Display
5.searchSenior
6.searchLoc
7.genRatio
8.Sort
9.Exit
Choice: 9

*/