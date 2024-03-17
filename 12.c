/*
	Q12. Write a program to accept integer values of base and index and calculate power of base to
	index.
		Input:
		base: 2     index: 5
		Output: 32
*/


#include<stdio.h>
int main()
{
	int base =2 ,index= 5, result=1;
	printf("Input : \n");
	printf("base: %d     index: %d\n",base,index);

	for(int i=1; i<= index; i++)
		result = result * base;
	
	printf("Output: %d\n",result);

	return 0;
}
