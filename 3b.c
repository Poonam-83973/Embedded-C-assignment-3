/*
	Q3.Write a program to accept a number and
		b.Reverse the number
		 Input: 9362
		 Output: 2639
*/

#include<stdio.h>
int main()
{
	int num ,rem, rev = 0, temp;
	printf("enter the number : ");
	scanf("%d",&num);

	temp = num ;
/*	
	d = num % 10 ;
	num = num /10;

	c = num % 10 ;
	num = num /10;

	b = num % 10 ;
	num = num /10;

	a = num ;
*/  

	while (num != 0)
	{ 
		rem = num % 10;
		rev =(rev * 10 )+ rem;
		num = num / 10;
	}

	printf("Input : %d\n",temp);
	printf("Output : %d\n",rev);
return 0;
}
