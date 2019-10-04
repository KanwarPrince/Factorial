#include<stdio.h>
void main()
{
	int num;
	clrscr();
	scanf("Enter the Number %d",&num);
	for(int i = 1;i<=num;i++)
		num = num*i;
	printf("Factorial : %d",num);
	getch();
{
