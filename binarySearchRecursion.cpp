#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector <int> arr,int tar,int st,int end){
     if(st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid]){
            return binarySearch(arr,tar,mid+1,end);
        }  
            else if(tar<arr[mid]){
                return binarySearch(arr,tar,st,mid-1);
            }else{
                return mid;
            }
     }
     return -1;

}
int main(){
     vector <int> arr={1,2,3,4,5,6,7,8};
     int tar=5,st=0,end=arr.size()-1;
     int r=binarySearch(arr,tar,st,end);
     if(r==-1){
        cout<<"\nElement is not found";
     } else{
        cout<<"Element found at index "<<r;
     }
   


    return 0;
}