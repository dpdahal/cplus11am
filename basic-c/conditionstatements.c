#include<stdio.h>

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        default:
            printf("Invalid number");
    }
//    int a,b,c,d;
//    printf("Enter two number: ");
//    scanf("%d,%d,%d,%d",&a,&b,&c,&d);

//    if(a>b && a>c && a>d){
//
//    }else if(b>a && b>c && b>d){
//
//    }else if(c>a && c>b && c>d){
//
//    }else{
//    }

//    if(a>b){
//        if(a>c){
//            printf("A is large");
//        }else{
//            printf("C is large");
//        }
//    }else{
//        if(b>c){
//            printf("B is large");
//        }else{
//            printf("C is large");
//        }
//    }

}
