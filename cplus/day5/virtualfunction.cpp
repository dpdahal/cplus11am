#include<iostream>

using namespace std;

class Mobile{

    public:
       virtual void brand(){
            cout<<"I am parent brand";
        }
};

class Mi:public Mobile{     
     public:
        void brand(){
                cout<<"I am child brand";
            }
 };


int main(){
     Mobile *obj;
     obj = new Mi();
     obj->brand();


    // Mi obj;
    // obj.brand();

}