#include<stdio.h>
int fact(int);
int main(){
	int n,r;
	printf("Enter the number=");
	scanf("%d",&n);
	r=fact(n);
	printf("\nFactorial=%d",r);
	return 0;
}
int fact(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
