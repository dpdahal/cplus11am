#include<iostream>

using namespace std;

//  40%
// data types, conditon ,loop,array,function

class A{

    public:
        string grand_father="Mobile";
        
        void demo(){

        }

};

class B:public A{

    public:
        string father="MI";

};

class C:public A{

    public:
       void display_name(){
            cout<<grand_father;
       }

};



int main(){

    C obj;
    obj.display_name();


}