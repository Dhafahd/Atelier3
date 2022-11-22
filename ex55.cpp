#include <iostream>
#include <string.h>
using namespace std;

class Animal {
     public:
     string nom;
     int age;

     void set_value( int agee, string nomm){
   age = agee;
   nom = nomm;

     }
};

class zebra : public Animal{
public:
          void res( string city){
             cout<<"my name is:"<<" "<<nom<<endl;
             cout<<"my age is:"<<" "<<age<<endl;
             cout<<"my city is :"<<city;
          }
};
class dolphin : public Animal{
public:
void res( string city){
              cout<<"my name is:"<<" "<<nom<<endl;
             cout<<"my age is:"<<" "<<age<<endl;
             cout<<"my city is :"<<city;
             
          }
};

int main (){
      zebra zebra;

   int x;
   string name;
   string city;
    
    cout<<"Your name is:"<<" ";
   cin>>name;
   
   cout<<"Your age is:"<<" ";
   cin>>x;
  
   
   
 cout<<"Your city is :"<<" ";
   cin>>city;
   
    zebra.set_value(x,name);
    zebra.res(city);
return 0;
}