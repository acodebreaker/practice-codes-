#include<bits/stdc++.h>
#define STACKSIZE 100
int stack[STACKSIZE];
int top=-1;

void push(int x)
{
if(top==STACKSIZE-1)
{
printf("overflow \n");
return ;
}
stack[++top]=x;
return ;

}
////
int pop()
{
if(top==-1)
{
printf("underflow");
//exit(1);
}
//top--;
return (stack[top--]);
}


void printNGE(int arr[],int size)
{
int element,next;
push(arr[0]);
for(int i=1;i<size;i++)
{
next=arr[i];

if(top!=-1)
{
 element =pop();
while(element<next)
{
printf("next for %d is %d \n",element , next);
if(top==-1)
break;
element=pop();
}

if(element>next)
push(element);
}

push(next);
}
//return ;
while(top!=-1)
{
printf("next for %d is -1\n",pop());


}

}
////////////////////////


using namespace std;
int main()
{
int arr[]={15,25,18,3754,2319,1144,713,89,35,97};
printNGE(arr,10);













return 0;
}
