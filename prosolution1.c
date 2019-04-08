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
