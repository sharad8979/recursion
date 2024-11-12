#include<stdio.h>
int DectoBin(int,int,int);
int main(){
	int n,ans=0,r;
	printf("Enter the number=");
	scanf("%d",&n);
	r=DectoBin(n,1,ans);
	printf("Binary representation=%d",r);
	
	return 0;
}
int DectoBin(int n,int p,int ans ){
	int r;
	r=n%2;
	ans=ans+r*p;
	if(n>0){
		return DectoBin(n/2,p*10,ans);
	}
	else{
		return ans;
		
	}
}
