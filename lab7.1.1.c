
 #include<stdio.h>
 #include<conio.h>
 
 int main () {
 	int a[100];int n;
 	printf("nhap chieu dai cua mang: ");
 	scanf("%d",&n);
 	for (int i=0;i<n;i++)
 	{scanf("%d",&a[i]);}
 	for (int i=0;i<n;i++)
 	{
 		for (int j=0;j<n-1-i;j++)
 		{if (a[j]>a[j+1])
 		{int temp=a[j];
 		a[j]=a[j+1];
 		a[j+1]=temp;
 		}}}
 		for (int i=0;i<n;i++)
 		{printf("%d",a[i]);}
 		}

