// Q.4 WAP display sum of natural using recurrision 

#include<stdio.h>
int sum(int n)
{

    if(n<=1)
    {
	return n;
    }
    else
    {
    	return(n+sum(n-1));
	}
}
int main()
{
	int n;
	printf("\nenter the number:\n");
	scanf("%d",&n);
	printf("nsum = %d",sum(n));
	return 0;
}
