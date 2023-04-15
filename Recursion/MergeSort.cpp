#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1= mid-s+1;
    int len2=e-mid;
    int num1[len1];
    int num2[len2];
    int index=s;
    for(int i=0;i<len1;i++){
        num1[i]=arr[index++];
    }
    for(int i=0;i<len2;i++ ){
        num2[i]=arr[index++];
    }
    index=s;
    int index1=0;
    int index2=0;
    while (index1<len1 && index2< len2 )
    {
        if (num1[index1]<num2[index2]){
            arr[index]=num1[index1];
            index++;
            index1++;
        }
        else{
            arr[index]=num2[index2];
            index++;
            index2++;
        }
    }
    while(index1<len1){
        arr[index]=num1[index1];
        index++;
        index1++;
    }
    while(index2<len2){
        arr[index]=num2[index2];
        index++;
        index2++;
    }
    
}
void MergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    
    MergeSort(arr,s,mid);

    MergeSort(arr,mid+1,e);
    
    merge(arr,s,e);
}

int main(){
    int arr[10]={4,1,8,5,90,45,28,72,99,32};
    MergeSort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}
