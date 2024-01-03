// Q.2 WAP a program to display fibonacci series of given number 

#include<stdio.h>
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
	    return 1;
	}
	else
	{
		return (fibo(n-1)+fibo(n-2));
	}
}

int main()
{
	int n,i;
	printf("\n Enter the number n :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
    	printf("%d\t",fibo(i));
	}
	return 0;
}
