#include<stdio.h>
int push();
int pop();
int peep();
int change();
int disp();
int stack[10],top=-1,item;
int push()
{
    if(top>=9)
    {
        printf("stack is full/overflowing  \n");
    }
    else
    {
        top=top+1;
        printf("enter element.\n");
        scanf("%d",&item);
        stack[top]=item;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("stack is empty/underflowing \n");
    }
    else
    {
        item=stack[top];
        top=top-1;
        printf("\n deleted element is:%d",item);
    }
}
int disp()
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty\n");
    }
    else
    {
    printf("\n stack is \n");
    for(i=top;i>=0;i--)
    {
        printf("%d \n",stack[i]);
    }
    }

}
int change()
{
    int a,temp;
     if(top==-1)
    {
        printf("stack is empty/underflowing  \n");
    }
    else
    {
    printf("enter the place where you want to change.\n");
    scanf("%d",&top+1);
    printf("enter the number the new number.\n");
    scanf("%d",&a);
    {
        temp=stack[top];
        stack[top]=a;
        a=temp;
    }
    }
}
int peep()
{
    int b;
    printf("enter the place that the you want to see. \n");
    scanf("%d",&b);
    printf("%d",stack[b]);
}
int main()
{
    int n,ch,loop,i;
    do
    {
    printf("which you want perform 1)push 2)pop 3)peep 4)change 5)display \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1 :
        {
            printf("\n enter the number of element to insert.\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
              push();
            }
            break;
        }
    case 2 :
        {
            pop();
            break;
        }
    case 3 :
        {
            peep();
            break;
        }
    case 4 :
        {
            change();
            break;
        }
    case 5 :
        {
            disp();
            break;
        }
    default:
        {
            printf("enter valid choise. \n");
        }
    }
        printf("\n do you want to continue ? press 1 if yes else 0 \n");
        scanf("%d",&loop);

    }
    while(loop!=0);
}
