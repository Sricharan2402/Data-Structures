#include<stdio.h>
#include<stdlib.h>
//#include"CQueue.h"
#include"Queue.h"
void main()
{
	Queue *Q=initialize();
	
	int ch,x;
	do{
		printf("\nMenu:\n1.enQueue\n2.deQueue\n3.Display\n4.Exit\nChoice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Element: ");
				scanf("%d",&x);
				enQueue(Q,x);	
				break;
			case 2:
				x=deQueue(Q);
				if(x==-1)
					printf("\nQueue Empty");
				else
					printf("The deleted element is %d",x);
				break;
			case 3:
				dispQ(Q);
				break;
						
		}
	}while(ch!=4);
}


/* 
Output:

Menu:
1.enQueue
2.deQueue
3.Display
4.Exit
Choice: 1
Element: 2

Menu:
1.enQueue
2.deQueue
3.Display
4.Exit
Choice: 1
Element: 3

Menu:
1.enQueue
2.deQueue
3.Display
4.Exit
Choice: 1
Element: 2

Menu:
1.enQueue
2.deQueue
3.Display
4.Exit
Choice: 1
Element: 6

Menu:
1.enQueue
2.deQueue
3.Display
4.Exit
Choice: 3

Queue:
        2 3 2 6
Menu:
1.enQueue
2.deQueue
3.Display
4.Exit
Choice: 2
The deleted element is 2
Menu:
1.enQueue
2.deQueue
3.Display
4.Exit
Choice: 3

Queue:
        3 2 6
Menu:
1.enQueue
2.deQueue
3.Display
4.Exit
Choice: 4

*/