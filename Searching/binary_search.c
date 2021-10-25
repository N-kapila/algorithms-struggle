#include<stdio.h>

void binarySearch(int arr[],int size,int value){
    int low=0;
    int upper=size-1;
    int middle=(low+upper)/2;
    int iteration;

    while(value != arr[middle] && low < upper){
         if(value > arr[middle]){
            low = middle +1;
         }else{
            upper= middle-1;

         }
    middle=(low+upper)/2;
    iteration++;
    }
    if(value==arr[middle]){
        printf("Value found at %d position", middle+1);
    }
    else {
        printf("value not found");
    }
}

int main(){
    int arr[]={3,4,8,9,15};
    binarySearch(arr,5,15);
}
