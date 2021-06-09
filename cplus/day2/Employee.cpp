

#include<iostream>

using namespace std;

#define CMP_NAME "CPLUS"

#define ND &&



class Employee{

    int const PI = 3.454;

    public:
        int x;
        // void demo();
        void demo(){
            cout<<"Inside function " <<endl;
        };
        void test();
};


void Employee::test(){
        cout<<"Outside "<<CMP_NAME <<endl;
}


int main(){
   Employee emp;
   emp.x=10;
   emp.demo();
   emp.test();

   int a=20,b=40;

   if(a==20 ND b==40){
        cout<<"Both same";
   }

}