#include<stdio.h>
#include<string.h>

void displayMessage(char data[]);

int main(){
    char  data[100]="We are learning string function in c";
    displayMessage(data);
    // char name1[20]="ram";
    // char name2[20]="rama";
    // printf("%s",strrev(name1));
    // if(strcmp(name1,name2)==0){
    //     printf("Yes");
    // }else{
    //     printf("NO");
    // }
    // char name[100]="Suraj & Pralosh";
    // printf("%d",strlen(name));
    // strlen, strcpy, strcat, strcmp,
    // strrev,strlwr,strupr
    // char userName[20];
    // printf("Enter username: ");
    // fgets(userName,sizeof(userName),stdin);
    // puts(userName);
    // scanf("%[^\n]s",userName);
    // printf("%s",userName);

    // scanf("%s",userName);
    // printf("%s",userName);

    // char myName[10]={'s','o','p','h','i','a','\0'};
    // char userName[]="ram";
    // printf("%s\n",myName);
    // printf("%s",userName);

}


void displayMessage(char data[]){
    printf("Messages: \n");
    puts(data);
}