#include<iostream>
using namespace std;
void BubbleSort(int *arr,int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,n-1);
}
int main(){
    int arr[]={2,5,8,3,1,5,67,32};
    BubbleSort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
}