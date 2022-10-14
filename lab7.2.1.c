#include<stdio.h>

int main() {
	int a[100];int n;int c=0;int i,b;
	while (0==0)
	{scanf("%d",&a[c]);
	if (a[c]==0)
	break;c++;
	}
	printf("nhap gia tri can tim: ");
	scanf("%d",&n);
	for (int i=0;i<c;i++)
	{if (a[i]==n){b=i;
break;}}
if (i==c)
printf("khong co gia tri n nao trong mang"); else printf("gia tri n xuat hien dau tien tai vi tri : %d",b) ;

return 0;
}	
