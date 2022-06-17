#include<stdio.h>

int main()
{
	int a,num[8];
	printf("enter integer: \n");
	for(a=0;a<=8;a++){
		scanf("%d",&num[a]);
	}
	printf("\n");
	printf("reversed integer: \n");
	for(a=7;a>=0;a--){
		printf("%d\n",num[a]);
	}
	return 0;
}
