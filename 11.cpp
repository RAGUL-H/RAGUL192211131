#include<stdio.h>
int main()
{
	int i,j,rows,columns,a[10][10],sum=0;
	scanf("%d%d",&i,&j);
	printf("\n Enter the matrix \n");
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			scanf("%d",&a[rows][columns]);
		}
	}
	if (i=j)
		sum=sum+a[i][j];
	printf("%d",sum);
}
