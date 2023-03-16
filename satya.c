#include<stdio.h>
int main(){
    int n=12345;
    int even=0;
    int odd=0;
    scanf("%d",&n);
    while(n!=0){
        int dig=n%10;
        if(dig%2==0){
            even+=dig;
        }
        else{
            odd+=dig;
        }
        n=n/10;
    }
    printf("Even-%d\n",&even);
    printf("Odd-%d",&odd);
}