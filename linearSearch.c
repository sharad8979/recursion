#include<stdio.h>
int main(){
	int arr[10],i,ind=-1,n;
	printf("Enter the elements=");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the search element=");
	scanf("%d",&n);
	for(i=0;i<10;i++){
		if(arr[i]==n){
			ind=i;
			break;
		}
	}
	
	if(ind!=-1){
		printf("Element present at position = %d", ind);
	}else{
		printf("Not found");
	}
}
