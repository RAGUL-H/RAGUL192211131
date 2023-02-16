#include<stdio.h>
int main() 
{
  int a[100],n,k,i,l;
  printf("Number of elements in the list: ");
  scanf("%d", &n);
  printf("Enter elements of the list: ");
  for (i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter the element to search : ");
  scanf("%d",&k);
  for (i=0;i<n;i++)
    if (a[i]==k) 
      break;
  if (i<n) 
    printf("element %d is found at index %d",k,i); 
  else
    printf("element not found");
}
