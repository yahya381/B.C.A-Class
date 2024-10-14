#include<stdio.h>
int main(){
	int a;
	printf("enter the 1 number");
	scanf("%d",&a);
	int b;
	printf("enter the 2 number");
	scanf("%d",&b);
	int c;
	printf("enter the 3 number");
	scanf("%d",&c);
	int d;
	printf("enter the 4 number");
	scanf("%d",&d);
	int e;
	printf("enter the 5 number");
	scanf("%d",&e);
	
	
	a<b?a<c?a<d?printf("a"):printf("d"):printf("c"):
	b<c?b<d?printf("b"):printf("d"):
	c<d?printf("c"):printf("d");
}
