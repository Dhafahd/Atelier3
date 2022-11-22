#include <iostream>

using namespace std;

class test {
public :
    static int compter;
    void call(){
        cout<< "la fonction call est utiliser "<<++compter
        <<" fois"<<endl; }; };


int test ::compter=0;

int main(){

    test t1 ;
    t1.call();
    test t2 ;
    t2.call();
    return 0 ;
}