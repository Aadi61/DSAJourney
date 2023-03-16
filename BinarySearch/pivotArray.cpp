#include<iostream>
using namespace std;
int main(){
    int arr[7]={6,8,9,2,3,4,5};
    int s=0;
    int e=7-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    std::cout<<"The pivot element is "<<arr[mid];
}