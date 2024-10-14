#include<stdio.h>
int main(){
	int a=20;
	int b=15;
	int c=13;
	int d=18;
	int e=16;
	
	a<b?a<c?a<d?a<e?printf("a"):printf("e"):printf("d"):printf("c"):
    b<c?b<d?b<e?printf("b"):printf("e"):printf("d"):
    c<d?c<e?printf("c"):printf("e"):
    d<e?printf("d"):printf("e");
}
