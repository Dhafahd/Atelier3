#include <iostream>
#include<cmath>
using namespace std;

class Addition
{
       public:
     void afficher(int x,int y,int z,int w){
       cout<<"la somme de votre deux nombre complex est:"<<" "<<x+w<<"+"<<y+z<<"i" ;
     }
};

class soustraction
 {
     public:

     
 void afficher(int x,int y,int z,int w){
       cout<<"la soustraction de votre deux nombre complex est:"<<" "<<x-w<<"+"<<y-z<<"i" ;
     }
      
};
class  multiplication  {
     public:
     
 void afficher(int x,int y,int z,int w){
       cout<<"la multiplication  de votre deux nombre complex est:"<<" "<<x*w-y*z<<"+"<<x*z+w*y<<"i" ;
     }


};
class  division  {
     public:
int t,r,v;
void afficher(int x,int y,int z,int w){
     v=w*w+z*z;
     t=x*w+y*z; 
     r=w*y-x*z;
       cout<<"la division de votre deux nombre complex est:"<<" "<<t/v<<"+"<<r/v<<"i" ;
     }

};


int main(){
    Addition add;
    soustraction sous;
    multiplication mult;
    division div;
   int X,Y,W,Z;
    cout<<"les nombres complex sont ecrit sous la forme a+ib."<<endl;
     cout<<"donner votre 1er nombre complex :"<<endl;
     cout<<"a=";
     cin>>X;
     cout<<"b=";
     cin>>Y;

     cout<<"donner votre 2eme nombre complex :"<<endl;
     cout<<"a=";
     cin>>W;
     cout<<"b=";
     cin>>Z;
       add.afficher(X,Y,Z,W);
       cout<<"\n";
       sous.afficher(X,Y,Z,W);
      cout<<"\n";
       mult.afficher(X,Y,Z,W);
     cout<<"\n";
       div.afficher(X,Y,Z,W);

return 0;

}