#include<stdio.h>
int main(){

    int arr[5]={4,3,2,1,5};

    for(int i=0;i<5;i++){
if(i%2==0){
for(int j=0;j<4;j++)
 {
    if(arr[j]>arr[j+1] ){
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

    }
 }
}
    }


for(int i=0;i<5;i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}