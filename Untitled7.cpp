#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum,d;
	sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("%d",sum);

}
