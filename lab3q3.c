#include<stdio.h>
int main(){
    int triplet[3][7] = 
    {
        {0,0,1,1,2,3,3}, 
        {2,4,3,4,3,1,2},
        {4,5,3,6,2,2,3}
    };
    int arr[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=0;
        }
    }
    for(int j=0;j<7;j++){
        int i=0;
        arr[triplet[i][j]][triplet[i+1][j]]=triplet[i+2][j];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}