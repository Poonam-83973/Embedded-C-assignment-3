/*
	Q14. Write a program to accept a number and check whether it is Prime no.
*/


#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	int flag=1;

	for(int i=2; i<=(num/2); i++)
	{
		if((num%i) == 0)
		{
			flag = 0;
			break;
		}
	
	}

	if(flag == 1)
		printf("The entered number is prime number\n");
	else
		printf("The entered number is not prime number\n");


	return 0;
}
