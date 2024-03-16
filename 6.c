/*
	Q6. Write a program to accept a number and print all factors excluding the number
		Input: 24
		Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/


#include<stdio.h>
int main()
{
	int num, i=1;
	printf("Input : ");
	scanf("%d",&num);

	while(i <= num/2)
	{
		if( num%i == 0)
			printf("%d,",i);

		i++;
	}

	return 0;
}
