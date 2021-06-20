#include<iostream>

using namespace std;

class MyClass{
        private:
            int x;
            friend int getNumber(MyClass);
                        
};

int getNumber(MyClass c){
    c.x=10;
    return c.x;
}
int main(){
    MyClass obj;
    cout<<getNumber(obj);

}