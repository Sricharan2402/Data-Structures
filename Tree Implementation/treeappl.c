
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"treeimpl.h"
#include"exptree.h"


void main()
{
	int y;
	Stack *S=initialize();
	do
	{
		int ch,x;
		char string[80];
		printf("Enter the expression: ");
		scanf(" %[^\n]",string);
		Stack *S=initialize();
		char Post[80];
		InftoPost(S,string,Post);
		printf("Post fix: %s",Post);
		node *n=treeExp(Post);
		int ans=evalPost(n);
		printf("\nThe answer is %d",ans);
		
	}while(y==1);
}


/*
Output:
Enter the expression: 2+3*2-4*1-2/1
Post fix: 232*+41*-21/-
The answer is: 0

*/