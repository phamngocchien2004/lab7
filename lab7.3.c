#include<stdio.h>


int main () {
	int arr[100];
	int i,n,a,b,temp,j,c,d;
	scanf("%d %d",&a,&b);
	printf("Do dai cua mang : ");
	scanf("%d",&n);
	for (i=0;i<n-1;i++)
	{scanf("%d ",&arr[i]);} 
	for (int i=a;i<=b;i++)
	{ for (int j=i+1;j<=b;j++)
	{if (arr[i] >arr[j])
	{  temp =arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
	}}}
for (int c=a;c<=b;c++)
printf("%d ",arr[c]);
	
	return 0;
	}
	
	
