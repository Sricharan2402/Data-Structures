#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
#include "PriorQueueImpl.h"

int main() {
    pq *p;
    int max,choice;
    printf("Enter the size of Heap : ");
    scanf("%d",&max);
    p = init(max);
    do{
        printf("MENU:\n\t1-Insert\n\t2-Delete\n\t3-View\n\nChoice: ");
        scanf("%d",&choice);
        
        switch(choice) {
            case 1: {
                emp mx=input();
                insert(p,mx);
                break;
            }
            case 2:{
                emp x=Delete(p);
                if(x.sal!=INT_MIN)
                    printf("Deleted : (%d)-(%s)\n",x.id,x.name);
                break;
            }
            case 3: disp(p,1,0);break;
        }
    }while(choice);
    return 0;
}


/* Output:

Enter the size of Heap : 5
MENU:
        1-Insert
        2-Delete
        3-View

Choice: 1
Enter Details :
        ID :12
        NAME :Sreyas
        SALARY :10000000
MENU:
        1-Insert
        2-Delete
        3-View

Choice: 1
Enter Details :
        ID :Srivath
        NAME :  SALARY :^XMENU:
        1-Insert
        2-Delete
        3-View

Choice: ^C
C:\Users\test\Downloads\162heap>a
Enter the size of Heap : 5
MENU:
        1-Insert
        2-Delete
        3-View

Choice: 1
Enter Details :
        ID :1
        NAME :s
        SALARY :1
MENU:
        1-Insert
        2-Delete
        3-View

Choice: 1
Enter Details :
        ID :2
        NAME :v
        SALARY :2
MENU:
        1-Insert
        2-Delete
        3-View

Choice: 1
Enter Details :
        ID :3
        NAME :a
        SALARY :3
MENU:
        1-Insert
        2-Delete
        3-View

Choice: 3
(1)-(s)-(1.00)
--(2)-(v)-(2.00)
--(3)-(a)-(3.00)
MENU:
        1-Insert
        2-Delete
        3-View

Choice: 4
*/
