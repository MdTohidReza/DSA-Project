// Q.3 WAP a program for tower of Hanoi to move all disk from destination tower 

#include<stdio.h>

void TOH(int n,int A,int B,int C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("move a disc from %d to %d\n",A,C);
		TOH(n-1,B,A,C);
	}

}
int main()
{
	int n,A,B,C;
	printf("enter the n, A, B ,C :\n");
	scanf("%d%d%d%d",&n,&A,&B,&C);
	TOH(n,A,B,C);
	return 0;
}
