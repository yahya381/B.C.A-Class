#include<stdio.h>
main(){
	int size,i,temp;
	printf("Enter the number of array : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the number of elements :\n ");
	
	for(i=0;i<size;i++){
	printf("array [%d] element : ",i);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		arr[i]=arr[i]*3;
	}
	for(i=0;i<size;i++){
	printf("%d\n",arr[i]);
}
}
