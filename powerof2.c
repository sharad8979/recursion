#include<stdio.h>
int power(int ,int);
int main(){
	int p,r;
	printf("Enter the power=");
	scanf("%d",&p);
	r=power(p,2);
	printf("Value = %d",r);
	return 0;
}

int power(int p,int n){
	if(p<=0){
		return 1;
	}
	return n*power(p-1,n);
}
