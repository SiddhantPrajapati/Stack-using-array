//reverse string using stack
#include<stdio.h>
char stack[10];
int top=-1;
char item;
char push();
int change();
char display();
char pop();

char push()
{
    if(top>=9)
    {
        printf("stack is full.\n");
    }
    else
    {
        top=top+1;
        scanf("%s",stack);
        item=stack[top];

    }
}
char pop()
{
    int i;
    if(top==-1)
    {
       printf("\n stack is empty");
    }
    else
    {


       stack[top]=item;
       printf("%s\n",stack);
       top=top-1;

    }
}
char main()
{
    int ch,loop,n,i;
    do
    {
        printf("\n WHAT DO YOU WANT TO PERFORM 1)PUSH 2)REVERSE STRING \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :
        {
           printf("enter the no of element that you want to insert\n");
           scanf("%d",&n);
           printf("enter string.");
           for(i=0;i<n;i++)
           {
               push();
           }
           break;
        }
        case 2 :
            {   printf("\n reverse string.\n");
                pop();
                break;
            }
        default :
            {
                printf("\n enter valid choice\n");
                break;
            }
    }
            printf("\n do you want to continue? if yes then press 1 else 0 \n");
            scanf("%d",&loop);
    }
    while(loop!=0);

    }


