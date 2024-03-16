/*
	Q3.Write a program to accept a number and
		a.Calculate sum of digits of integer
		Input: 9362
		Output: 9 + 3 + 6 + 2 = 20
*/


#include<stdio.h>
int main()
{
	int num = 9362,a,b,c,d,temp;
	temp = num ;
	d = num % 10 ;
	num = num /10;

	c = num % 10 ;
	num = num /10;

	b = num % 10 ;
	num = num /10;

	a = num ;
	printf("Input : %d\n",temp);
	printf("Output : %d + %d + %d + %d = %d\n",a,b,c,d,(a+b+c+d));
return 0;
}
