#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    FILE *fp;
    fp = fopen("data.txt","a+");
    printf("Enter any number: ");
    scanf("%d",&num);
    fprintf(fp,"%d",num);
    fclose(fp);
}