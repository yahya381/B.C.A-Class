#include<stdio.h>
int main(){
	Top:
		printf("Enter the 1 number for pizza : \n");
		printf("Enter the 2 number for burgar : \n");
		printf("Enter the 3 number for momos : \n");
		printf("Enter the 4 number for exit : \n");
	    default:printf("invelid choice : ");
	    
	int choice,choice1;
    printf("Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Enter the 1 number of regular pizza : \n");
			printf("Enter the 2 number of sp pizza : \n");
			printf("Enter the 3 number of afgani pizza : \n");
			printf("Enter the 4 number of exit : \n");
			scanf("%d",&choice1);
			
			switch(choice1){
				case 1:
					printf("Your regular pizza order successfully : \n");
					goto Top;
				case 2:
					printf("Your sp pizza order successfully : \n");
					goto Top;
				case 3:
					printf("Your afgani pizza order successfully : \n");
					goto Top;
				case 4:
					printf("exit : \n");
					break;
					goto Top;
					default:printf("invelid choice : \n");
					goto Top;
			}
			case 2:
			printf("Enter the 1 number of regular burger : \n");
			printf("Enter the 2 number of sp burger : \n");
			printf("Enter the 3 number of afgani burger : \n");
			printf("Enter the 4 number of exit : \n");
			scanf("%d",&choice1);
			
			switch(choice1){
				case 1:
					printf("Your regular burger order successfully : \n");
					goto Top;
				case 2:
					printf("Your sp burger order successfully : \n");
					goto Top;
				case 3:
					printf("Your afgani burger order successfully : \n");
					goto Top;
				case 4:
					printf("exit : \n");
						break;
					goto Top;
					default:printf("invelid choice : \n");
			}
			case 3:
			printf("Enter the 1 number of regular momos : \n");
			printf("Enter the 2 number of sp momos : \n");
			printf("Enter the 3 number of afgani momos : \n");
			printf("Enter the 4 number of exit : \n");
			scanf("%d",&choice1);
			
			switch(choice1){
				case 1:
					printf("Your regular momos order successfully : \n");
					goto Top;
				case 2:
					printf("Your sp momos order successfully : \n");
					goto Top;
				case 3:
					printf("Your afgani momos order successfully : \n");
					goto Top;
				case 4:
					printf("exit : \n");
						break;
					goto Top;
					default:printf("invelid choice : \n");
					goto Top; 
			}
	}	
	
}
