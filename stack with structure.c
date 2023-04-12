//stack using structure
#include<stdio.h>
#define size 5
struct stack
{
    int a[size],top;
    int temp[size],tos;
}s;
//push operation
void push(int item)
{
    s.a[++s.top]=item;
}
//pop operation
int pop()
{
    return s.a[s.top--];
}
//display operation
void display()
{
    int i;
    printf("\nThe stack contains:");
    for(i=s.top;i>=0;i--)
    {
        printf("\n\t%d",s.a[i]);
    }
}
//peep operation
void peep()
{
    printf("\n\tTop:%d",s.top);
    printf("\n\tValue:%d",s.a[s.top]);
}
void change(int row,int new_element)
{
    int i;
    int j=-1;
    printf("\n\tTop:%d",s.top);
    for(i=s.top;i>row;i--)
    {
        s.temp[++j]=s.a[s.top--];
        s.a[s.top=new_element];
        for(i=j;i>-1;i--)
        {
            s.a[++s.top]=s.temp[j--];
        }
    }
}
int main()
{
    s.top=-1;
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
            if(s.top>=size-1)
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
            if(s.top==-1)
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
            if(s.top==-1)
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
            if(s.top==-1)
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
            if(s.top==-1)
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
