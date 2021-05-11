#include<stdio.h>
int main(){
    int a,ar[10];
    int b;
    printf("Enter The input for Array\n");
    for(int i=0;i<9;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter The position and elment to be inserted\n");
    scanf("%d %d",&a,&b);
    for (int i = 9; i >= a-1; i--)
    {
        ar[i+1] = ar[i];
    }
    ar[a-1]=b;
    printf("Updated Array is\n");
    for(int i=0;i<10;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}