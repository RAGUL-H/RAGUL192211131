#include<stdio.h>
int main()
{
	int pa,noy,r,interest,sc,y,n;
	printf("Enter the principal amount=");
	scanf("%d",&pa);
	printf("Enter the number of years=");
	scanf("%d",&noy);
	printf("Is customer senior citizen(y/n)=");
	scanf("%d",&sc);
	if(sc==y)
		r=12/100;
	else if(sc==n)
		r=10/100;
	 
	
	interest=(pa*noy*r)/100;
	printf("interest:%d",interest);
}
