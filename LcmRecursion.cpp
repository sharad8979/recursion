#include<iostream>
int lcm(int,int,int);
using namespace std;
int main(){
    int a,b,c;
     cout<<"Enter three numbers=";
     cin>>a>>b>>c;
     int r=lcm(a,b,c);
     cout<<"\nLcm of three numbers="<<r;
    return 0;
}
int lcm(int a,int b,int c){
    int max;
    if(a>b){
        if(a>c){
            max=a;
        }else{
            max=c;
        }
    }else{
        if(b>c){
            max=b;
        }else{
            max=c;
        }
    }
    static int m=0;
    m=m+max;
    if(m%a==0 && m%b==0 && m%c==0){
        return m;
    }
    return lcm(a,b,c);
}