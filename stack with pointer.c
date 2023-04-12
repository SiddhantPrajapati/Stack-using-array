//stack using structure
#include<stdio.h>
#define size 5
struct stack
{
    int a[size],top;
    int temp[size],tos;
}*ptr;
//push operation
void push(int item)
{
    ptr->a[++ptr->top]=item;
}
//pop operation
int pop()
{
    return ptr->a[ptr->top--];
}
//display operation
void display()
{
    int i;
    printf("\nThe stack contains:");
    for(i=ptr->top;i>=0;i--)
    {
        printf("\n\t%d",ptr->a[i]);
    }
}
//peep operation
void peep()
{
    printf("\n\tTop:%d",ptr->top);
    printf("\n\tValue:%d",ptr->a[ptr->top]);
}
void change(int row,int new_element)
{
    int i;
    int j=-1;
    printf("\n\tTop:%d",ptr->top);
    for(i=ptr->top;i>row;i--)
    {
        ptr->temp[++j]=ptr->a[ptr->top--];
        ptr->a[ptr->top=new_element];
        for(i=j;i>-1;i--)
        {
            ptr->a[++ptr->top]=ptr->temp[j--];
        }
    }
}
int main()
{
    ptr->top=-1;
    int item,choice,row,new_element;
    char ans;
    do
    {
        printf("\nSTACK IMPLEMENTATION PROGRAM\n");
        printf("\n 1.push\n 2.pop \n 3.display \n 4.peep \n 5.change \n 6.exit\n");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            if(ptr->top>=size-1)
            {
                printf("\n Stack overflow.\n");
                break;
            }
            else
            {
                printf("\n enter item to be pushed:");
                scanf("%d",&item);
                push(item);
                break;
            }
        case 2:
            if(ptr->top==-1)
            {
                printf("\n Stack underflow \n");
                break;
            }
            else
            {
                pop();
                break;
            }
        case 3:
            if(ptr->top==-1)
            {
                printf("\n Stack underflow \n");
                break;
            }
            else
            {
                display();
                break;
            }
        case 4:
            if(ptr->top==-1)
            {
                printf("\n Stack underflow \n");
                break;
            }
            else
            {
                peep();
                break;
            }
        case 5:
            if(ptr->top==-1)
            {
                printf("\n Stack underflow \n");
                break;
            }
            else
            {
                printf("\n\t Enter row no:");
                scanf("%d",&row);
                printf("\n\t Enter new element:");
                scanf("%d",&new_element);
                change(row,new_element);
                break;
            }
        case 6:
            return 0;
        }
    }
    while(choice!=6);
    return 0;

}

