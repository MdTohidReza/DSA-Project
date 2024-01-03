#include<stdio.h>
//descending order bubble sort
int main()
{
	int i,j,temp,a[100],n,*p;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	p=a;
	printf("enter elements :\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",(p+i));
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
			
		}
	}
	printf("sorted array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	return 0;
}
