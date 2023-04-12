#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
char pop();
char st[25];
int top=-1;
void main()
{
    char str1[25],str2[25];
    int i,j;
    printf("\n Enter string:");
    gets(str1);
    for(i=0;str1[i]!=NULL;i++)
    {
        push(str1[i]);
    }
    for(i=0;str1[i]!=NULL;i++)
    {
        str2[i]=pop();
    }
    str2[i+1]=NULL;
    printf("\n Reverse of input string=");
    puts(str2);
}
void push(char x)
{
    top++;
    st[top]=x;
}
char pop()
{
    char temp;
    temp=st[top];
    top--;
    return temp;
}
