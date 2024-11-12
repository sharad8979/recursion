#include<stdio.h>
int gcd(int,int,int);
int main(){
	int n,m,r,min;
	printf("Enter two numbers=");
	scanf("%d %d",&n,&m);
	if(n<m){
		min=n;
	}else{
		min=m;
	}
    r=
	gcd(n,m,min);
	printf("GCD of two numbners=%d",r);
	return 0;
}
int gcd(int n,int m,int min){
	
			if(n%min==0&&m%min==0){
		return min;
	}
	return gcd(n,m,min-1);
}
