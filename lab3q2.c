#include<stdio.h>
int main(){
    int ar[4][5];
    printf("Enter the no of Elements of the matrix\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int counter = 0;  
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if (ar[i][j]!=0){
                counter++;
            }
        }
    }
    int rarr[3][counter];
    int k=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if (ar[i][j]!=0){
                rarr[0][k] = i;
                rarr[1][k] = j;
                rarr[2][k] = ar[i][j];
                k++;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<counter;j++){
            printf("%d ",rarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}