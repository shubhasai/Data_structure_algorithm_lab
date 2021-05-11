#include<stdio.h>
int main(){
    int arr[10];
    int a,b;
    // Original Data
    int n=8;
    printf("Enter elements for origional array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter The Element to be added at 1st and Last Position respectively\n");
    scanf("%d %d",&a,&b);
    n++;
    for(int i =n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]= a;
    arr[9]=b;
    // printing updated array
    n++;
    for(int i=0;i<n;i++){
        printf("%d ,",arr[i]);
    }
    return 0;
}