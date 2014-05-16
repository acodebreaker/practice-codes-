#include <iostream>
#include<bits/stdc++.h>
#define MAX(a,b) (a>b)?a:b
using namespace std;
 
int main()
{
int n,i,a,maxsofar,currentmax;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
 
maxsofar=arr[0];
currentmax=arr[0];
for(i=1;i<n;i++)
{
currentmax=MAX(arr[i],currentmax+arr[i]);
maxsofar=MAX(currentmax,maxsofar);
 
 
}
printf("%d",maxsofar);
 
 
 
 
 
return 0;
}
