#include <iostream>
using namespace std;
class MyClass
{
public:
    MyClass(); 
    ~MyClass();

};
 MyClass::MyClass(){   
 cout<<"le constucteur"<<endl;
  } 
 MyClass::~MyClass(){
 	cout<<"le destucteur"<<endl;
  }
int main (){ 
     MyClass m;
  return 0;
}