#include<stdio.h>
int main(){
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	
	int i,sum,digit;

	while(num>9){
		
		if(i%2==0){
				digit=num%10;
			num=num/100;
			sum=sum+digit;
			printf("%d",sum);
		}
		
	}
	
}
