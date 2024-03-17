/*
	Q22.Print following patterns
*/


#include<stdio.h>
int main()
{
	printf("1st pattern--------------\n");
	/*
		*
		* *
		* * *
		* * * *
		* * * * *
	*/
	for (int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf(" *");
        }
	  printf("\n");
	 }

	 printf("2nd pattern----------------\n");
	/*
		* * * * *
		* * * *
		* * *
		* *
		*
	*/
	
	for (int i=1; i<=5; i++)
	{
		for(int j=5; j>=i; j--)
		{
			printf(" *");
        }
	  printf("\n");
	 }


	printf("3rd pattern-------------------\n");
	/*
		1
		1 2
		1 2 3
		1 2 3 4
		1 2 3 4 5
	*/
	for (int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf(" %d",j);
        }
	  printf("\n");
	 }

	printf("4th pattern--------------------\n");
	/*
		5
		5 4
		5 4 3
		5 4 3 2
		5 4 3 2 1
	*/
	for (int i=5; i>=1; i--)
	{
		for(int j=5; j>=i; j--)
		{
			printf(" %d",j);
        }
	  printf("\n");
	 }


	return 0;
}






















