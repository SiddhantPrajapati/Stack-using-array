//do push,pop,display using stack.
#include<stdio.h>
void main()
{
    int ch,top=0,val[5];
    printf("Enter your choise: 1)push 2)pop 3)display.");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :
            if(top==5)
            {
                printf("STACK IS FULL.");
            }
            else
            {
                printf("enter your choice:\n");
                scanf("%d",&val[top]);
                top++;
            }
        case 2 :
            if(top==-1)
            {
                printf("stack is empty.\n");
            }
            else
            {

            }

        break;
    }
}
