#include <iostream>
using namespace std;

class personne
{
private:
    string nom;
    string prenom;
    string date_naissance;
public:
    personne(string n,string p,string d){
        nom=n;
        prenom=p;
        date_naissance=d;
    }
    void afficher(){ //affichage des  informations
        cout<<"personne:"<<"  "<<nom<<"  "<<prenom<<"  "<<date_naissance<<endl;
    }
};

class employe:public personne{
private:
    string nom;
    string prenom;
    string date_naissance;
    double salaire;

public:
    employe(string n,string p,string d,double s): personne(n,p,d)
    {
        nom=n;
        prenom=p;
        date_naissance=d;
        salaire=s;
    }
    void afficher(){
        cout<<"employe:"<<"  "<<nom<<"  "<<prenom<<"  "<<date_naissance<<"  "<<salaire <<endl;
    }
};

class chef:public employe{
private:
    string nom;
    string prenom;
    string date_naissance;
    double salaire;
    string service;
public:
    chef(string n,string p,string d,double s,string x): employe(n,p,d,s)
    {
        nom=n;
        prenom=p;
        date_naissance=d;
        salaire=s;
        service=x;
    }
    void afficher(){
        cout<<"chef:"<<"  "<<nom<<"  "<<prenom<<"  "<<date_naissance<<"  "<<salaire <<"  "<<service<<endl;
    }
};
class directeur:public chef{
private:
    string nom;
    string prenom;
    string date_naissance;
    double salaire;
    string service;
    string societe;
public:
    directeur(string n,string p,string d,double s,string x,string y): chef(n,p,d,s,x)
    {
        nom=n;
        prenom=p;
        date_naissance=d;
        salaire=s;
        service=x;
        societe=y;
    }
    void afficher(){
        cout<<"directeur:"<<"  "<<nom<<"  "<<prenom<<"  "<<date_naissance<<"  "<<salaire
         <<"  "<<service<<"  "<<societe<<endl;
    }
};


int main()
{

    personne p1("Morad","Saban","08/11/1920");
    p1.afficher();
    employe e1("Ahmad","Sabiri","02/12/1930",15300);
    e1.afficher();
    chef c1("Sabir","Bourhil","11/03/1943",20070,"Construction");
    c1.afficher();
    directeur d1("Fahd","Chibani","02/01/1950",40000,"Construction","informatique");
    d1.afficher();

}