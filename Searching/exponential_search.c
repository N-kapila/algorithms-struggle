#include<stdio.h>
#include<stdlib.h>
int min(int a,int b) {
    if (a > b) return b;
    else return a;
}
int recBinarySearch(int arr[],int low,int high, int value){
    if(high >= low){

        int middle = (low+high)/2;

        if(arr[middle]==value)
            return middle+1;
        else if (arr[middle]>value)
            return recBinarySearch(arr,low,middle-1,value);
        else
            return recBinarySearch(arr,middle+1,high,value);
    }
    return -1;
}

int exponentialSearch( int arr[],int size,int value){
    int i=1;

    if(arr[0]==value){
        printf("value found at %d position", value);
    }else{
        while(i<size && arr[i]<= value){
            i *= 2;
        }
        int result= recBinarySearch(arr,i/2,min(i,size-1),value);
        if(result==-1){
            printf("value not found");
        }else{
            printf("value found at %d position",result+1);
        }
    }
}

void main(){
    int arr[]={1,8,9};
    printf("value found position:");
    printf("%d",recBinarySearch(arr,0,2,9));
    printf("\n");
    exponentialSearch(arr,3,1);
}
