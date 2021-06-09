#include<stdio.h>

int main(){
    int n,a,j;
    for(a=1;a<=5;a++){
            for(j=0;j<=5-a;j++)
                printf(" ");
            for(j=1;j<=a;j++){
                printf("%d",a);
            }
            printf("\n");

    }
//    int a,n,j;
//    printf("Enter any number: ");
//    scanf("%d",&n);
//    a=n;
//    for(j=2;j<n;j++){
//        if(n%j==0){
//            printf("Not prime");
//            break;
//        }
//    }
//    if(a==j){
//        printf("Prime number");
//    }

//    int n1,n2,i;
//    printf("Enter two number: ");
//    scanf("%d %d",&n1,&n2);
//    for(i=n1;i<=n2;i++){
//        if(i%2==0){
//            printf("%d",i);
//        }
//    }


}
