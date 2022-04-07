#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int combination(int, int);
int factorial(int);

int main()
{
	int q1, q2, bag, n=0;

	printf("Enter the number of red balls : \n");
	scanf("%d ",&q1);

	printf("Enter the number of white balls : \n");
	scanf("%d ", &q2);

	printf("Enter the number of bags: \n");
	scanf("%d", &bag);

	printf("RED: %d\t White: %d\t BAGS: %d\n",q1, q2, bag);
	printf("res: %d\n",q2+q1/2);

	if(q1 < 2)
	{
		printf("No red ball can be left alone in a bag violates\n");
		printf("Ways: %d\n",n);
		return -1;
	}
	else if(q2 + q1/2 < bag)
	{
		printf("No bags should be empty violates\n");
		printf("Ways: %d\n",n);
		return -1;
	}
	else
	{
		n = combination(q2, 2);
		printf("Ways: %d\n",n);
	}

	printf("Exiting main code\n");

	return 0;
}

int combination(int q1, int n1)
{
	int res = 0, fret=0;
	res = factorial(q1)/(factorial(q1-n1) * factorial(n1));
	fret = res/2;
	return fret;
}

int factorial(int f)
{
	int fa=1;
	int temp = f;
	while(temp > 0)
	{
		fa = fa * temp;
		temp--;
	}

	printf("factorial of %d: %d\n",f, fa);
	return fa;	
}