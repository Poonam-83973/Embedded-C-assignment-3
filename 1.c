/*
	Q1.Write a program to accept a character and a number, and print the character number times
	Input:
		Character: *
		Number: 6
		Output:******
*/


#include<stdio.h>
int main()
{ 
	int num;
	char ch;

	printf("Character : ");
	scanf("%c",&ch);
	printf("Number : ");
	scanf("%d",&num);

	int i=1;
	while(i <= num)
		{
		 printf("%c",ch);
		 i++;
        }
	printf("\n");
	return 0;
}
