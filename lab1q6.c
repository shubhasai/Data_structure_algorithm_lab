#include<stdio.h>
int main(){
    int arr[3][3];
    int tra[3][3];
    printf("Enter The Elements of 3X3 matrix\n");
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Entered Array Is:\n");
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transposed Matrix Is\n");
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            tra[j][i] = arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            printf("%d ",tra[i][j]);
        }
        printf("\n");
    }
    return 0;
}