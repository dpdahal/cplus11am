#include<stdio.h>

int main(){
    int num[]={3,56,76,5,90,4,7,8,1,9};
    int total = sizeof(num)/sizeof(int);
//    printf("size is %d",total);
//    printf("\n");

    for(int x=0;x<=total;x++){
        printf("%d\n",num[x]);
    }
    //printf("%d",num);
//
//    int i,age[10];
//    for(i=0;i<10;i++){
//        printf("Enter age: ");
//        scanf("%d",&age[i]);
//    }
//    for(i=0;i<10;i++){
//        printf("%d\n",age[i]);
//    }

}
