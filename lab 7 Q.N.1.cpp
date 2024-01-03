// Q.1 WAP a program to factorial of a given number using recurrsion

#include<stdio.h>
int fact(int n)
{
	if(n<=0)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}

int main()
{
	int n;
	printf("\n Enter the number n :\n");
	scanf("%d",&n);
	int factorial =fact(n);
	printf("factorial of n is: %d",factorial);
	return 0;
}
