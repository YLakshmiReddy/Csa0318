#include<stdio.h>
void fibonacci(int n)
{
	int first=0,second=1,next=first+second;
	int i;
	for (i=0;i<=n;i++)
	{
		if (i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
	printf("%d ",next);
}
}
int main()
{
	int n;
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}