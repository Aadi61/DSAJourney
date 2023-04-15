#include<iostream>
using namespace std;
int BinarySearch(int arr[],int key,int s,int e){
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return 1;
    }
    if(s>e){
        return 0;
    }
    if(arr[mid]>key){
        BinarySearch(arr,key,s,mid-1);
    }
    else{
        BinarySearch(arr,key,mid+1,e);
    }
    
}
int main(){
    int arr[6]={2,5,8,23,67,100};
    int key=100;
    std::cout<<BinarySearch(arr,key,0,(sizeof(arr)/4)-1);
    return 0;
}