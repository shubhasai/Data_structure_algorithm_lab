//WAP in C to find out the number of substring “MAT” present in the string “MATHEMATICS”.
#include<stdio.h>
int check(char c[],char d[],int i,int j){
    int res=0;
    for (int k=0;k<i-j;k++){
        int l;
        for( l=0;l<j;l++){
            if(c[l+k]!=d[l]){
                break;
            }
        }
        if(l==j){
            res++;
            l=0;
        }
    }
    return res;
}
int main(){
    int m=0,n=0;
    char a[]="MATHEMATICS";
    char b[]="MAT";
    int x=0;
    
    while(a[x]!='\0'){
        m++;
        x++;
    }
    int y=0;
    while(b[y]!='\0'){
        n++;
        y++;
    }
    printf("%d",check(a,b,m,n));
    return 0;
}