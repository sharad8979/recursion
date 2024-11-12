#include<stdio.h>
int sum(int ,int);
int main(){
	int n,r,s=0;
	printf("Enter the number=");
	scanf("%d",&n);
	r=sum(n,s);
	printf("\nSum=%d",r);
	return 0;
}
int sum(int n,int s){
	s=s+n%10;
	if(n>0){
		return sum(n/10,s);
	}else{
		return s;
	}
}
