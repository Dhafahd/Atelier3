#include <iostream>

using namespace std;

class media{
public:
    string titre;

    string id(string i){
        titre=i;
        return titre;
    }

    virtual void imprimmer(){
        cout<<"id de la classe media est :"<<" "
        <<titre<<endl;}};



class audio:public media{
public:
    int duree;
    int get_duree(int d){
        duree=d;
        return d;}

    void imprimmer(){

        media::imprimmer();
        cout<<"le duration de audio est "<<" "<<duree
        <<" "<<
        "seconde"<<endl;}};




class livre:public media{
public:

    string name;
    string get_name(string n){
        name=n;
        return n;}

    void imprimmer(){

        media::imprimmer();
        cout<<"le nom du livre  est "<<" "<<name<<endl;}};




class press:public media{
public:

    string name1;
    string get_name1(string np){
        name1=np;
        return np;}

    void imprimmer(){

        media::imprimmer();
        cout<<"le nom du press  est "<<" "<<name1<<endl; }};




class journal: public press{
public :
    string name_j;
    string get_namej(string nj){
        name_j=nj;
        return nj;}

    void imprimmer(){

        press::imprimmer();
        cout<<"le journal est "<<" "<<name_j<<endl; }};


class magasine: public press{
public :
    string name_m;
    string get_namem(string nm){
        name_m=nm;
        return nm;}

    void imprimmer(){

        press::imprimmer();
        cout<<"la magasine est "<<" "<<name_m<<endl; }};



class revue: public press{
public :
    int temp;
    int get_temp(int t){
        temp=t;
        return t;}

    void imprimmer(){

        press::imprimmer();
        cout<<"le temps est : "<<" "<<temp<<endl; }

};


class disc: public audio{
public :

    string titre_m;
    string get_titre(string ti){
        titre_m=ti;
        return ti;}

    void imprimmer(){

        audio::imprimmer();
        cout<<"letitre du disc est : "<<" "<<titre_m<<endl; }

};


class cd: public audio{
public :
    int poid;
    int get_poid(int p){
        poid=p;
        return p;}

    void imprimmer(){

        audio::imprimmer();
        cout<<"le poid de cd est  : "<<" "<<poid<<" "<<"g"<<endl; }};

class cassette: public audio{
public :
    string titre_2;
    string get_titre2(string t2){
        titre_2=t2;
        return t2;}

    void imprimmer(){

        audio::imprimmer();
        cout<<"le titre de casette est   : "<<" "<<titre_2<<endl; }};

int main()
{

    media m;
    m.id("6789");
    m.imprimmer();
    audio o;
    o.id("2234");
    o.get_duree(67);
    o.imprimmer();
    livre l;
    l.id("8769");
    l.get_name("Sun");
    l.imprimmer();
    press p;
    p.id("R568");
    p.get_name1("art");
    p.imprimmer();
    cd c;
    c.id("Iphone8");
    c.get_poid(3);
    c.get_duree(60);
    c.imprimmer();
    cassette cc;
    cc.id("tt790");
    cc.get_titre2("music");
    cc.get_duree(19);
    cc.imprimmer();

    return 0;}