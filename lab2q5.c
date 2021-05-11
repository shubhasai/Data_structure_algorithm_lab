#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int start=0,end=size-1;
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
    printf("The array after reversing\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}