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
    printf("Enter Tm Quantum:\t");
    scanf("%d",&tq);
    printf("\n\nProcess\t|Turnaround Tm|Waiting Tm\n\n");
    for(tm=0,count=0;rem!=0;)
    {
        if(rt[count]<=tq && rt[count]>0)
       {
           tm+=rt[count];
           rt[count]=0;
           flag=1;
        }
        else if(rt[count]>0)
       {
           rt[count]-=tq;
           tm+=tq;
         }
       if(rt[count]==0 && flag==1)
      {
          rem--;
          printf("P[%d]\t|\t%d\t|\t%d\n",count+1,tm-at[count],tm-at[count]-bt[count]);
          wt+=tm-at[count]-bt[count];
          trnarndtm+=tm-at[count];
          flag=0;
        }
