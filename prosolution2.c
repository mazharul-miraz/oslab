#include<stdio.h>
int main()  // main function Starting
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
    printf("Enter Tm Quantum:\t"); // quantum value added
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
if(count==n-1)
           count=0;
        else if(at[count+1]<=tm)
           count++;
        else
           count=0;
     }
     printf("\nAverage Waiting Tm= %f\n",wt*1.0/n);
     printf("Avg Turnaround Tm = %f",trnarndtm*1.0/n);
     return 0;
 }
	            dist+= absolute(last-curr);
	            printf("[%d]",absolute(last-curr) );
	            last = curr;
	        }
	        for(i=s_index; i<len; i++)
		{
	            printf(", %4d",qu[i]);
	            curr = qu[i];
	            dist+= absolute(last-curr);
	            printf("[%d]", absolute(last-curr) );
	            last = curr;
	        }
	    }
  printf("\nDistance : %d\n",dist);
      	    return 0*printf("\nSUCCESSFUL EXIT\n");
      	}
