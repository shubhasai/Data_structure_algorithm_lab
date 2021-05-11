#include<stdio.h>
int main(){
    int arr[3][3];
    int a;
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
    printf("Enter The Scalar You want to multiply\n");
    scanf("%d",&a);
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            arr[i][j] = arr[i][j]*a;
        }
    }
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}