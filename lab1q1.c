#include<stdio.h>
int main(){
    int ch;
    printf("Enter The Number of Element You want to enter in the array\n");
    scanf("%d",&ch);
    int arr[ch];
    printf("Enter The Number:\n");
    for(int i=0;i<ch;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<ch;i++){
        printf("%d, ",arr[ch-i-1]);
    }
    return 0;
}