#include<stdio.h>
int Bsearch(int arr[],int size,int element){
    int high,low,mid;
    high=size-1;
    low=0;
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==element){
            printf("required index is %d",mid);
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}

int main()
{
    int arr[]={15,16,33,44,65,71,87};
    int size=7;
    int element=65;
    
    Bsearch(arr,size,element);
}