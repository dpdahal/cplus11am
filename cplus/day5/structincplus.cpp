#include<iostream>

using namespace std;

struct Students{
    int id;
    char name[30];
    int age;    
};

void displayStudnetInfo(Students);

int main(){
    Students s;
    cout<<"Enter id: ";
    cin>>s.id;
    cout<<"Enter name: ";
    cin>>s.name;
    cout<<"Enter age: ";
    cin>>s.age; 
    displayStudnetInfo(s); 
}

void displayStudnetInfo(Students s){
    cout<<"Studnet Record"<<endl;
    cout<<"Id: "<<s.id <<endl;
    cout<<"Name: "<<s.name <<endl;
    cout<<"Age: "<<s.age <<endl;
}
