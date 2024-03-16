/*
	Qc. Check whether given number is numeric palindrome or not
*/

#include<stdio.h>
int main()
{
	int num=9362, rev= 0, remainder, temp;

	printf("Input : %d\n",num);

	temp = num;

	while(num != 0)
		{
			remainder = num % 10;
			rev = (rev * 10) + remainder;
			num = num /10;
		}

	if(temp == rev)
		printf("The %d is numeric palindrome.\n",temp);
	else
		printf("The %d is not numeric palindrome\n",temp);

	return 0;
}
