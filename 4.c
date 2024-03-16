/*
	Q4. Write a program to find factorial of given number.
		Input: 5
		Output: 1 * 2 * 3 * 4 * 5 = 120
*/


#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Input : ");
    scanf("%d",&n);

    int fact=1;
    while(i<=n)
    {
		fact=i*fact;
   		i++;
	}
    printf("factorial is %d\n",fact);
    return 0;

}
