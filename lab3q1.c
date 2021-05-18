#include<stdio.h>
int main(){
    int ar[4][4];
    printf("Enter the no of Elements of the matrix\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int counter = 0;  
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if (ar[i][j]==0){
                counter++;
            }
        }
    }
    if (counter>8){
        printf("matrix is a sparse matrix.\n");
    }
    else{
        printf("matrix is not a sparse matrix.\n");
    }
    return 0;
}