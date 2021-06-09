#include<stdio.h>

int add(int,int);

int add(int a,int b){
    int sum;

    sum=a+b;
    printf("Total: %d",sum);
}

int main(){
 add(2,6);

}


//int add();
//
//
//int add(){
//    int a,b,sum;
//    printf("Enter a: ");
//    scanf("%d",&a);
//    printf("Enter b: ");
//    scanf("%d",&b);
//    sum = a+b;
//    printf("Total number: %d",sum);
//
//}
//
//int main(){
//    add();
//    return 0;
//}

//void message();
//
//void message(){
//    printf("Hello function\n");
//}
//
//int main(){
//    message();
//    message();
//}


