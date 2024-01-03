// lab exam 3rd semester DSA 
// WAP to find the x^y using array

#include<stdio.h>
int power(int a, int b);

int main()
{
	int base,n,result;
	printf("enter base number \n");
	scanf("%d",&base);
	
	printf("enter power number(positive integer):");
	scanf("%d",&n);
	
	result=power(base,n);
	printf("%d^%d = %d",base,n,result);
	
	return 0;
	
}
int power(int base ,int a)
{
	if( a !=0)
	{
		return(base*power(base,a-1));
	}
	else
	{
		return 1;
	}
}

