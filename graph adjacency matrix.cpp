#include<bits/stdc++.h>
#define MAX 101 
int adj[MAX][MAX];
using namespace std;
int main()
{
int choice;
printf("enter 1 for directed , 2 for undirected graph\n ");
scanf("%d",&choice);
printf("enter number of vertex\n");
int n,i,j;
int source,dest;
scanf("%d",&n);
int max_edges;
if(choice==1)
max_edges=n*(n-1);
if(choice==2)
max_edges=n*(n-1)/2;
for(i=1;i<=max_edges;i++)
{
printf("enter source and dest , -1 ,-1 to exit \n");
scanf("%d%d",&source,&dest);
if(source==-1&&dest==-1)
break;
if(source<0||source>n||dest<0||dest>n)
printf("invalid entry");
adj[source][dest]=1;
if(choice==2)
adj[dest][source]=1;



}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",adj[i][j]);
printf("\n");





}











return 0;
}
