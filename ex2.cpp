#include <iostream>
using namespace std;
class Shape
{
     protected:
       float l;
       float h;
       public:
       Shape(float x,float y)
       {
        
        l =x;
        h =y;
       }
};

class triongle : public Shape {
     public:
      triongle(float x, float y):Shape(x,y){}
      float area(){
      //cout<<s;
        return ((l*h)/2);
        }
};
class rectangle: public Shape {
     public:
             rectangle(float x, float y):Shape(x,y){}

      float area(){
        return (l*h);
        }
   
};


int main(){
    triongle tr(2,3);
    rectangle rec(2,3);
   

cout<<"air du trinangle est:"<<" "<<tr.area()<<endl;
cout<<"air du rectangle est:"<<" "<<rec.area()<<endl;
return 0;

}