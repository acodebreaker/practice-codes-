#include <iostream>
#include<bits/stdc++.h>


struct node
{
int data;
struct node *link;
};


void add(struct node **p,int x)
{
if(*p==NULL)
{
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=x;
*p=temp;
}



}



using namespace std;

int main() 
{
	struct node *start=NULL;
    add(&start,5);
printf("%d",start->data);
	return 0;
}
