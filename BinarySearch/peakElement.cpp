#include<iostream>
using namespace std;
int main(){
    int arr[10]={3,5,6,7,8,9,7,4,2,1};
    int s=0;
    int e=10-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    std::cout<<"The peak element is "<<arr[mid];
}