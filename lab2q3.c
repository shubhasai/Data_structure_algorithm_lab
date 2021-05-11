#include<stdio.h>
int main(){
    int a,ar[10];
    int b,c;
    printf("Enter The input for Array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter The position for moving\n");
    scanf("%d %d",&a,&b);
    c=ar[a-1];
    for(int i=a-1;i>=b;i--){
        ar[i]=ar[i-1];
    }
    ar[b-1]=c;
    printf("Updated Array is\n");
    for(int i=0;i<10;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}