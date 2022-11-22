#include <iostream>
using namespace std;

class mere{
  public:

  void display(){
    cout<<"hello"<<" ";
  }

};
class file: public mere{
public:

void display(){
    mere:: display();
    cout<<"world";
}
};

int main (){
file f;

f.display();



}