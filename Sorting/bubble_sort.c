#include<stdio.h>

void bubbleSort(int arr[],int size){
    int a,b,temp;

    for(a=0;a<size - 1;a++){

        for(b=0;b<size- 1 - a;b++){
            if(arr[b]>arr[b+1]){
                temp=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=temp;
            }
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void main(){
    int arr[]={78,41,23,96,155};
    bubbleSort(arr,5);
    printArray(arr,5);
}
