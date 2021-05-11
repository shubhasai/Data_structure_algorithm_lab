#include<stdio.h>
int main(){
    int r=3,c=3;
    int ar1[r][c];
    int ar2[r][c];
    int sub[r][c];
    printf("enter the first matrix element=\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar1[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar2[i][j]);
        }
    }
    for (int i = 0; i < r; i++){
        for(int j =0; j<c; j++){
            sub[i][j] = ar1[i][j] - ar2[i][j];
        }
    }
    printf("The Result Is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}