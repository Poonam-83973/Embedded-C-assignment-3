/*
	Q19. Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range.
Input: 3 6
Output:
        3  4  5  6
		6  8  10 12
		9  12 15 18
		12 16 20 24
		15 20 25 30
		18 24 30 36
		21 28 35 41
		24 32 40 48
		27 36 45 54
		30 40 50 60
*/

#include<stdio.h>
int main()
{
	int num1, num2, res=1, val;
	printf("Enter lower limit: ");
	scanf("%d",&num1);

	printf("Enter higher limit: ");
	scanf("%d",&num2);
	
	for(int i=1; i<=10; i++)
	{
	  	for(int j=num1; j<=num2; j++)
	    {
	 		val=j*i;
			printf("%-4d",val);
	    }  
     	printf("\n");
	}

	return 0;
}

