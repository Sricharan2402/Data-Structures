#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define COUNT 10
#include"Playerimpl.h"

void main()
{
	Player *P=initialize();
	int ch;
	char name[80];
	do{
		printf("\nMenu:\n1.Insert\n2.Delete\n3.Display\n4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			  	printf("Enter the name: ");
			  	scanf(" %[^\n]",name);
			  	insert(P,name);
			  	break;
			case 2:
			  	printf("Enter the name: ");
			  	scanf(" %[^\n]",name);
			  	Delete(P,name);
			  	break;
			case 3:
			  	dispTree(P,0);
			  	break;	
			
		}
				
				
	}while(ch!=4);
	inorder(P);
	postorder(P);
	preorder(P);
}


/*
Output:
Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Dhoni

Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Raina

Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Rohit

Menu:
1.Insert
2.Delete
3.Display
4.exit3

                              Rohit

                    Raina

          Dhoni



Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Messi

Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Bumrah

Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Ashwin

Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Andre Iniesta

Menu:
1.Insert
2.Delete
3.Display
4.exit3

                              Rohit

                    Raina

                              Messi

          Dhoni

                    Bumrah

                              Ashwin

                                        Andre Iniesta



Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Suraj

Menu:
1.Insert
2.Delete
3.Display
4.exit3

                                        Suraj

                              Rohit

                    Raina

                              Messi

          Dhoni

                    Bumrah

                              Ashwin

                                        Andre Iniesta



Menu:
1.Insert
2.Delete
3.Display
4.exit1
Enter the name: Chahal  

Menu:
1.Insert
2.Delete
3.Display
4.exit3

                                        Suraj

                              Rohit

                    Raina

                              Messi

          Dhoni

                              Chahal

                    Bumrah

                              Ashwin

                                        Andre Iniesta



Menu:
1.Insert
2.Delete
3.Display
4.exit2
Enter the name: Andre Iniesta

Menu:
1.Insert
2.Delete
3.Display
4.exit2
Enter the name: Bumrah

Menu:
1.Insert
2.Delete
3.Display
4.exit3

                                        Suraj

                              Rohit

                    Raina

                              Messi

          Dhoni

                    Chahal

                              Ashwin



*/
