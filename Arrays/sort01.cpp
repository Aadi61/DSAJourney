#include<iostream>
using namespace std;
int main(){
    int arr[8]={0,1,0,0,1,1,0,1};
    int s=0;
    int e=7;
    while(s<e){
        while(arr[s]==0){
            s++;
        }
        while(arr[e]==1){
            e--;
        }
        if(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;}
    }
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
}