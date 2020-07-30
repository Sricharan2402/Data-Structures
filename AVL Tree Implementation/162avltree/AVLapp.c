#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define COUNT 10
#include"AVLimpl.h"

void main()
{
	data w;
	dict *d=NULL;
	dict *d1;
	int opt;
	char w1[80];
	
	do
	{
		printf("\nMENU \n1.INSERT \n2.SEARCH \n3.DISPLAY \n4.EXIT");
		printf("\nEnter option : ");
		scanf("%d",&opt);
 		switch(opt)
		{
			case 1:
					printf("Word: ");
					scanf(" %[^\n]",w.word);
					printf("Enter the meaning \n");
					scanf(" %[^\n]",w.meaning);					
					d=insert(d,w);
					break;
		
			case 2:
					printf("Word ");
					scanf(" %[^\n]",w1);
					d1=search(d,w1);
					printf(" The meaning is %s",d1->x.meaning);
					break;
			case 3:
					dispTree(d,0);
					break;
		}
	}
	while(opt!=4);
}


/*
Ouptut:
Enter the size of Heap : 5
MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: 1
Enter Details :
        ID :12
        NAME :Sreyas
        SALARY :10000000
MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: 1
Enter Details :
        ID :Srivath
        NAME :  SALARY :^XMENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: ^C
C:\Users\test\Downloads\162heap>a
Enter the size of Heap : 5
MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: 1
Enter Details :
        ID :1
        NAME :s
        SALARY :1
MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: 1
Enter Details :
        ID :2
        NAME :v
        SALARY :2
MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: 1
Enter Details :
        ID :3
        NAME :a
        SALARY :3
MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: 3
(1)-(s)-(1.00)
--(2)-(v)-(2.00)
--(3)-(a)-(3.00)
MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: 4
MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: MENU:
        1-Insert
        2-Delete
        3-Veiw

Choice: ^C
C:\Users\test\Downloads\162heap>cd ..

C:\Users\test\Downloads>cd 162avltree

C:\Users\test\Downloads\162avltree>gcc AVLapp.c -o a

C:\Users\test\Downloads\162avltree>a

MENU
1.INSERT
2.SEARCH
3.DISPLAY
4.EXIT
Enter option : 1
Word: A
Enter the meaning
a

MENU
1.INSERT
2.SEARCH
3.DISPLAY
4.EXIT
Enter option : 1
Word: B
Enter the meaning
b

MENU
1.INSERT
2.SEARCH
3.DISPLAY
4.EXIT
Enter option : 1
Word: C
Enter the meaning
c

MENU
1.INSERT
2.SEARCH
3.DISPLAY
4.EXIT
Enter option : 3

                    WORD: C  MEANING: c

          WORD: B  MEANING: b

WORD: A  MEANING: a

MENU
1.INSERT
2.SEARCH
3.DISPLAY
4.EXIT
Enter option : 4

*/					
	
