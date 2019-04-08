#include<stdio.h>
int main()
{
    int count,j,n,tm,rem,flag=0,tq;
    int wt=0,trnarndtm=0,at[10],bt[10],rt[10];
    printf("Enter Total Process:\t ");
    scanf("%d",&n);
    rem=n;
    for(count=0;count<n;count++)
    {
       printf("Enter Arrival Tm and Burst Tm for Process Process Number %d :",count+1);
       scanf("%d",&at[count]);
       scanf("%d",&bt[count]);
       rt[count]=bt[count];
      }
