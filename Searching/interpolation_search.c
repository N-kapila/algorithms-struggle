#include<stdio.h>
#include<stdlib.h>

int interpolationSearch(int arr[],int size,int value){
    int index;
    int low=0,high=size-1;

    while(value<=arr[high] && value>=arr[low] && low<=high){
        if(low==high){
            if(arr[low]==value)
                return low+1;
        }
        //return -1;
        index=((high-low)/(arr[high]-arr[low])) * (value-arr[low]) + low;
        if(arr[index]== value)
            return index+1;
        if(value<arr[index])
            high=index-1;
        else
            low=index+1;
    }
    return -1;
}

int main()
{   int arr[]={1,8,66,79,120};
    printf("value found position: ");
    printf("%d",interpolationSearch(arr,5,6));
}
