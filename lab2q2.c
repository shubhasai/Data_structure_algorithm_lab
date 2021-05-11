#include<stdio.h>
int main(){
    int a,ar[10];
    printf("Enter The input for Array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter The position of elment to be deleted\n");
    scanf("%d",&a);
    for (int i = a; i<10; i++)
    {
        ar[i-1] = ar[i];
    }
    printf("Updated Array is\n");
    for(int i=0;i<9;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}