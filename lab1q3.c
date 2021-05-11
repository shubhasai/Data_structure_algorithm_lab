#include<stdio.h>
int main(){
    int arr[10];
    int a,b;
    // Original Data
    int n=10;
    printf("Enter elements for origional array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // deleting elements at 1st and last position
    for (int i = 0; i <n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n=n-2;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}