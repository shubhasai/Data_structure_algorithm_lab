//WAP in C to find out the length of the given string “pneumonoultramicroscopicsilicovolcanoconiosis”.
#include<stdio.h>
int main(){
    char ch[] = "pneumonoultramicroscopicsilicovolcanoconiosis";
    int i=0;
    int counter=0;
    while(ch[i]!='\0'){
        counter++;
        i++;
    }
    printf("The Number of Characters Are: %d",counter);
    return 0;
}