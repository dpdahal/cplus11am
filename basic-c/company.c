#include<stdio.h>
#include<string.h>
#include<conio.h>

struct Employee{
    int emp_id;
    char name[100];
    char email[100];
    float salary;  
    struct address{
         char  tmp_address[100];
         char  pre_address[100];
    }adds;
};


int main(){
   
    struct Employee emp1;
    emp1.emp_id=1;
    strcpy(emp1.name,"Suraj");
    strcpy(emp1.email,"suraj@gmail.com");
    strcpy(emp1.adds.tmp_address,"Putalisadaka");
    strcpy(emp1.adds.pre_address,"Kathmandu"); 
    printf("Employee Id: %d\n",emp1.emp_id);
    printf("Employee Name: %s\n",emp1.name);
    printf("Employee Email: %s\n",emp1.email);
    printf("Employee Tmp Address: %s\n",emp1.adds.tmp_address);
    printf("Employee Pra Address: %s\n",emp1.adds.pre_address);

    getch();
}

