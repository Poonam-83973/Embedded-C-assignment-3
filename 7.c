/*
	Q7: Write a program to accept a number and print unique pairs of numbers such that multiplication of
	the pair is given number
	Input: 24
	Output:
	1 * 24 = 24
	2 * 12 = 24
	3 * 8 = 24
	4 * 6 = 24
*/


#include<stdio.h>
int main()
{
	int num = 24, i=1;
	printf("Input : %d \n",num);
	printf("Output : \n");
	
	while( i*i <= num)
	{
		if(i*(num/i) == num)
			printf("%d * %d = %d\n",i,num/i,num);
	    i++;
	}
	 
	return 0;
}


