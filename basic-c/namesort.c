#include<stdio.h>
#include<string.h>

void sort(char name[5][5]);
void display(char name[5][5]);

int main(){
    char name[5][5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter name: ");
        scanf("%s",name[i]);
    }
    sort(name);
    display(name);
}


void sort(char name[5][5]){
    int i,j;
    char temp[5];
    for(i=0;i<5;++i){
        for(j=i+1;j<5;++j){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
            
        }

    }

}

void display(char name[5][5]){
    int i;
    printf("=========== Ascending order ======\n");
    for(i=0;i<5;i++){
        printf("%s\n",name[i]);
    }

}


