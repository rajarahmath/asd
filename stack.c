#include<stdio.h>
void main()
{
int a[10],po,ch,top=-1,i,q,x;
printf("stack operation");
while(1)
{
printf("1.push\n2.pop\n3.status\n");
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(top==9)
{
printf("stack is overflow\n");
}
else
{
printf("enter the data");
scanf("%d",&x);
top++;
a[top]=x;
printf("%d is added in the position:%d\n",x,top);
}
break;
case 2:
if(top==-1)
{
printf("stack is undeflow");
}
else
{
printf("element %d is poped from stack\n",a[top]);
top--;
}
break;
case 3:
printf("stack");
if(top==-1)
{
printf("stack is empty");
}
else
{
for(i=0;i<=top;i++)
{
printf("%d",a[i]);
}
}
break;
default:
printf("error");
}
printf("\n do you want to continue\n1:y\n2.n");
scanf("%d",&q);
if(q==2)
{
break;
}
}
}

