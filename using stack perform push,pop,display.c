//c program to impliment stack using array
#include<stdio.h>
int stack[5],top=-1,item;
//top=-1 for every stack at initial state
#define max 5
//stack push operation
void push()
{
    if(top>=(max-1))
    {
        printf("stack overflow / full\n");
    }
    else
    {
        printf("\n enter element\n");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
//pop store stack[top] in variable and do top--
void pop()
{
    if(top==-1)
    {
        printf("\n stack is empty / underflow \n");
    }
    else
    {
        item=stack[top];  //storing stack of top  in the variable
        top=top-1;
        printf("\n deleted element is:%d \n",item);
    }
}
void disp()   //stack representation is from top to 0
{
    int i;
    if(top==-1)
    {
       printf("\n stack is empty\n");
    }
    else
    {
    printf("\n stack is :\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    }

}
int main()
{
    int choice,loop;
    int i,n;
    do
    {

        printf("\n enter choice 1)push 2)pop 3)display\n");
        scanf("%d",&choice);
        //switch case to check what user want to do
        switch(choice)
        {
        case 1:
            printf("\n enter no of elements to insert into stack\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
            push();
            }

            break;
            case 2: pop();
            break;
            case 3: disp();
            break;
            default:
                printf("your choise is invalid\n");
        }
        printf("do you want to continue:enter 1 or 0\n");
        scanf("%d",&loop);
    }while(loop!=0);
}
