/*
	Q18. Write a program to print the tables of the numbers from 1 to 10.
*/

#include<stdio.h>
int main()
{
	int res=1, val;

	for(int i=1; i<=10; i++)
	{
	  	for(int j=1; j<=10; j++)
	    {
	 		val=j*i;
			printf("%-4d",val);
	    }  
     	printf("\n");
	}

	return 0;
}

