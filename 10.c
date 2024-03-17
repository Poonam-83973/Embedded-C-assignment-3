/*
	Q10. Write a program to print table of given number.
*/

#include<stdio.h>
int main()
{
	int num,table;
	printf("Enter the number : \n");
	scanf("%d",&num);
	printf("The table of %d is as follows----\n",num);

	for(int i=1; i<=10 ;i++)
		{
		 table = num * i;
		 printf("%d * %d = %d\n",num,i,table);
		}
	return 0;
}
