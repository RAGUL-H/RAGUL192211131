#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
	int x,y;
	printf("enter the value x and y\n");
	scanf("%d%d",&x,&y);
	printf("Before swapping\nx=%d\ny=%d\n",x,y);
	swap(&x,&y);
	return 0;
}
void swap(int*a,int*b)
{
	int temp;
	temp =*b;
	*b=*a;
	*a=temp;
}
