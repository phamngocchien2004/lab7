#include<stdio.h>
#include<string.h>

int main () {
	char a[100];char n;
	gets(a);
	printf("nhap ki tu ban muon tim :");
	scanf("%c",&n);

	int len=strlen(a);
	for (int i=0;i<len;i++)
	{if (a[i] == n){
	printf("%d ",i+1);break;}  }
	return 0;}
