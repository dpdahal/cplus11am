#include<iostream>

using namespace std;

class Students{

    string full_name;
    public:
        Students(int id,string name){
            cout<<"Hello constructor" <<endl;
            cout<<id <<endl;
            full_name = name;
        };
        void showData(){
           cout<<full_name;
        }
};


int main(){
    Students obj(1,"ram");
    obj.showData();

}