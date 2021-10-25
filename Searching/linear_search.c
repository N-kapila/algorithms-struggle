#include <stdio.h>
#include<stdlib.h>

void linearSearch(int arr[],int size,int value){
    int loc=-1;
    int i;
    int iteration=0;

    for(i=0;i<size;i++){
        ++iteration;
        if(arr[i]==value){
            loc=i;
            break;
        }
    }
    if(loc>=0){
        printf("value found at %d position.",i+1);
    }else{
        printf("value not found");
    }
}

void main(){
    int arr[] = {78,63,65,41,33};
    linearSearch(arr,5,65);
}
