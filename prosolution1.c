#include<stdio.h>
#define PREV_REQ 145
#define CURR_REQ 143

         int absolute(int num)
        {
	    return num>0?num:(num*-1);
	}
	int compare(const void * a, const void * b)
        {
	   return ( *(int*)a - *(int*)b );
	}
  
	int main()
        {
	    int qu[] = {86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130};
	    int i,s_index,len=sizeof(qu)/sizeof(int),dist=0,last,curr;
	    qsort(qu, len, sizeof(int),compare);
	    last = CURR_REQ;
	    if(CURR_REQ>=PREV_REQ)
            {
	        for(i=0; i<len; i++)
		{
	            if(qu[i]>CURR_REQ)
		    {
	                s_index=i;
	                break;
	            }
	        }
	        printf("Order    : %4d",last);
	        for(i=s_index; i<len; i++)
		{
	            printf(", %4d",qu[i]);
	            curr = qu[i];
	            dist+= absolute(last-curr);
	            printf("[%d]",absolute(last-curr) );
	            last = curr;
	        }
	        for(i=s_index; i>0; i--)
		{
	            printf(", %4d",qu[i-1]);
	            curr = qu[i];
	            dist+= absolute(last-curr);
	            printf("[%d]",absolute(last-curr) );
	            last = curr;
	        }
	    }
	     else if(CURR_REQ<PREV_REQ)
	     {
	        for(i=0; i<len; i++)
		{
	            if(qu[i]>CURR_REQ)
		    {
	                s_index=i;
	                break;
	            }
	        }
	        printf("Order    : %4d",last);
	        for(i=s_index-1; i>=0; i--)
		{
	            printf(", %4d",qu[i]);
	            curr = qu[i];
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
