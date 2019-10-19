#include<stdio.h>
int main()
{
	int i,x,k;
	char a[100];
	printf("enter the string:\n");
	gets(a);
	printf("encrypt the string select 1.\n");
	printf("decrypt the string select 2.\n");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:
			for(i=0;(a[i]!='\0');i++)
			{
				for(k=0;k<3&&a[i]>=120;i++)
      			{
      				a[i]=97+k;
      				printf("\n encrypted string for loop:%s\n",a[i]);
				}
				a[i]=a[i]+3;
				printf("\nencrypted string:%s\n",a);
			}
			break;
		case 2:
			for(i=0;(i<100&&a[i]!='\0');i++)
			a[i]=a[i]-3;
			printf("\ndecrypted string:%s\n",a);
			break;
		default:
			printf("\nerror\n");
	}
	return 0;
}
