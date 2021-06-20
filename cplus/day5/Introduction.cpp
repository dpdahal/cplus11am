#include <iostream>

using namespace std;

class A
{
    int person_id;
    string person_name;

    public:

        void addPerson(int id,string name){
          this->person_id=id;
          this->person_name=name;
        }

        void showPerson(){
            cout<<this->person_id <<endl;
            cout<<this->person_name;
        }

};

int main()
{
    A *obj =  new A();

    obj->addPerson(1,"sophia");
    obj->showPerson();


    // A obj;
    // obj.addPerson(1,"ram");
    // obj.showPerson();

}