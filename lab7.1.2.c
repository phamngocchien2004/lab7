#include<stdio.h>
#include<conio.h>

int main() {
	int a[100];
	int n;int j;
 printf("nhap chieu dai cau mang: ");
 scanf("%d",&n);
 for (int i=0;i<n;i++)
 {scanf("%d",&a[i]);}
 for (int i=1;i<n;i++)
 {int temp=a[i];
 j=i-1;
 while (j>=0 && temp<a[j])
 {a[j+1]=a[j];
 j--;}
 a[j+1]=temp;
 }
 for (int i=0;i<n;i++)
 {printf("%d ",a[i]);}
 return 0;
 }
 
