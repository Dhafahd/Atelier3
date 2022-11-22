#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d {
	float x;
	float y;
	float z;
	
	public:
	
	
	vecteur3d(float a = 0, float b = 0, float c = 0) 
    : x(a), y(b), z(c) {
	}
	void afficher() {
		cout << "("<<x<<","<<y<<","<<z<<")" << endl;
	}

	vecteur3d somme(const vecteur3d & v) {
		vecteur3d s;
		s.x = x + v.x;
		s.y = y + v.y;
		s.z = z + v.z;
		return s;
	
	}
	
	float produit(const vecteur3d & v) {
		return x*v.x + y*v.y + z*v.z;
	}
	
	bool coincide(const vecteur3d & v) {
		return (x == v.x && y == v.y && z == v.z);
	}
	
	float norme() {
		return sqrt(x*x + y*y + z*z);
	}
	
	vecteur3d normax(vecteur3d v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
	
	vecteur3d * normax(vecteur3d * v) {
		if( this->norme() > v->norme())
		    return this;
		    
		return v;
	}
	
	vecteur3d & normaxR(vecteur3d &v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
};

int main() {
	vecteur3d v1(3,4,1);
	cout << "Vecteur V1";
	v1.afficher();
	vecteur3d v2(5,1,7);
	cout << "Vecteur V2";
	v2.afficher();
	cout<<endl;
	cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();
	cout << "Le produit scalaire des vecteurs v1 et v2 est : "
     << v1.produit(v2) << endl;
	cout<<endl;
	
	if(v1.coincide(v2))
	    cout << "Les vecteurs v1 et v2 coincident " << endl; 
	else
	    cout << "Les vecteurs v1 et v2 ne coincident pas " << endl;
	
	cout<<endl;
	cout<<"la norme du vecteur 1 est :" << v1.norme() << endl;
	cout<<endl;
	cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
	(v1.normax(v2)).afficher();
	cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
	(v1.normax(&v2))->afficher();
	cout << "Le vecteur qui a la plus grande norme est (par reference) :";
	(v1.normaxR(v2)).afficher();
	cout<<endl;
      }