/*
	Q3.Write a program to accept a number and
		b.Reverse the number
		 Input: 9362
		 Output: 2639
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
	printf("Output : %d%d%d%d\n",d,c,b,a);
return 0;
}
