/*
	Q3d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
	then the number is called as Armstrong number)
*/

#include<stdio.h>
int main()
{
	int num,remainder,res=1,mul=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	int	temp=num;

	printf("Input : %d\n",num);
	 

	while(num != 0)
		{
			remainder= num%10;
			num=num/10;
			res=remainder*remainder*remainder;
			mul= mul + res;
		}
    if(mul==temp)
		printf("The number is amstrong number\n");
	else
		printf("The number is not amstrong number\n");

	return 0;
}
