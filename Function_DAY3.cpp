#include<stdio.h>
#include<conio.h>
void loopfor()
{
	int a = 2;
	printf("\nUsing Function for 'for loop'");
	for(int i = 1;i<=3;i++)
	{
	   printf("\n%d * %d is %d",a,i,(a*i));	
	}
}
void loopdo()
{
	int a = 2;
	int i=1;
	printf("\nUsing Function for 'dowhile loop'");
	
	do
	{
	   printf("\n%d * %d is %d",a,i,(a*i));
	   i++;	
	}
	while(i<=3);
}
void loopwhile()
{
	int a = 2;
    int i=1;
    printf("\nUsing Function for 'while loop'");
	
	while(i<=3)
	{
	   printf("\n%d * %d is %d",a,i,(a*i));
	   i++;	
	}
}
int main()
{
	loopfor();
	loopdo();
	loopwhile();
	return 0;
}

