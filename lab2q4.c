#include<stdio.h>
int main(){
    int a,ar[10];
    int b,c;
    printf("Enter The input for Array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter The index for swaping\n");
    scanf("%d %d",&a,&b);
    c=ar[b];
    ar[b]=ar[a];
    ar[a]=c;
    printf("Updated Array is\n");
    for(int i=0;i<10;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}