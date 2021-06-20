#include<iostream>

using namespace std;
//  throw, try, catch

// int add(int x,int y){
//     if(y==0){
//         throw "Y is zero";
//     }
//     return(x/y);

// }

int main(){

try{
    int age=2;

    if(age>20){
            cout<<"Yes ok";
    }else{
        throw(age);
    }
}
// catch(int a){
//     cout<<"not allowed"<<endl;
//     cout<<a;
// }

catch(...){
    cout<<"not allowed"<<endl;
    // cout<<a;
}

   

    // try{
    //     cout<<add(10,2);    
    // }catch(const char* e){
    //     cout<<e <<endl;
    // }
   

}