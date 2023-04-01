#include<iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }

    return arr[n-1]+sum(arr,n-1);
}
int main(){
    int arr[5]={3,6,2,5,9};
    int s=sum(arr,5);
    cout<<s;
}