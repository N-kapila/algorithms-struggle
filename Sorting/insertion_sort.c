#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[],int size){
    int i,a,value;
    for(i=1;i<size;i++){

        value=arr[i];
        a=i-1;

        while(a>=0 && arr[a]>value){
            arr[a+1]=arr[a];
            a=a-1;
        }
        arr[a+1]=value;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void main(){
    int arr[]={78,41,23,96,155};
    insertionSort(arr,5);
    printArray(arr,5);
}
