#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

struct node 
{
int data;
struct node *next;
};

void printlist(struct node *p)
{
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
return ;
}

void addatbeginning(struct node **p, int x)
{
struct node *temp=(struct node *)malloc(sizeof(struct node));
if(*p==NULL)
{
temp->data=x;
temp->next=NULL;
*p=temp;
return ;
}
temp->data=x;
temp->next=*p;
*p=temp;
return ;
}

void addatend(struct node *p,int x)
{
while(p->next!=NULL)
p=p->next;

struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=x;
temp->next=NULL;
p->next=temp;
}



int main()
{
struct node *start=NULL;
addatbeginning(&start,4);
addatbeginning(&start,5);
addatbeginning(&start,3);
addatbeginning(&start,1);
addatend(start,10);
addatend(start,242);
printlist(start);


return 0;



}
