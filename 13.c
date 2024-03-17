/*
	Q13.Write a program to display n terms of Fibonacci series
		Input: 6
		Output: 1, 1, 2, 3, 5, 8
*/


#include<stdio.h>
int main(){
    int a,b,sum,n;
    a=1,b=1;
    printf("Enter number to display nth terms fibonacci series : ");
    scanf("%d",&n);
	printf("Input: %d\n",n);
    sum=0;
    for(int i=1;i<=n;i++)
	{
        a=b;
        b=sum;
        sum=a+b;   
   	    printf("%d,",sum);
   }
    printf("\n");
       
    
    return 0;
}
