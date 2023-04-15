#include<iostream>
#include<utility>
using namespace std;
int Partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int index=s+count;
    swap(arr[index],arr[s]);
    int i=s;
    int j=e;
    while(i<index && j>index){
        while(arr[i]<arr[index]){
            i++;
        }
        while(arr[j]>arr[index]){
            j--;
        }
        if(i<index && j>index){
            swap(arr[i],arr[j]);
            }
    }
    return index;
}

void QuickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=Partition(arr,s,e);

    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}

int main(){
    int arr[8]={6,3,87,23,78,43,26,1};
    QuickSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
}