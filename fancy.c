#include<stdio.h>
int main()
{
	int n;
	int r,ecount=0,ocount=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		  ecount++;
		else
		  ocount++;
	    n=n/10;
	}
	if(ecount==ocount)
	   printf("FANCY NUMBER");
	else
	   printf("NOT FANCY NUMBER");
	return 0;
}
