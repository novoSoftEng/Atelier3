#include<iostream>
using namespace std;

class Personne{
private:
string nom ,prenom ;
int date;
public:
Personne(string name,string pre,int d){
nom=name;
prenom=pre;
date=d;
}

void afficher(){
cout<<"le nom est :"<<nom<<endl;
cout<<"le prenom est :"<<prenom<<endl;
cout<<"la date de naissance est :"<<date<<endl;

}
};
class employee:public Personne{
private:
float salaire;
public:
employee(string name,string pre,int d,float sal):Personne(name,pre,d) { //pour pouvoir fair l appel a plusieurs constructeurs parametres
salaire=sal;

}
void afficher(){
Personne::afficher();  //methode pour utiliser la fct afficher de la classe mere
cout<<"votre salaire est :"<<salaire<<endl;
}
};
class chef:public employee{
private:
int service;
public:
chef(string name,string pre,int d,float sal,int s):employee(name,pre,d,sal) {
service=s;
}
void afficher(){
employee::afficher();
cout<<"le service choisi :"<<service<<endl;
}
};
class directeur:public chef{
private:
string societe;;
public:
directeur(string name,string pre,int d,float sal,int s,string so):chef(name,pre,d,sal,s) {
societe=so;
}
void afficher(){
chef::afficher();
cout<<"la societe choisie est:"<<societe<<endl;
cout<<"fin ";
}
};
int main (){

directeur ob("El ghazi","lubna",2003,10000,2,"societe_A"); //OBJET Parametrise pour donner les valeurs aux constructeurs

ob.afficher();
return 0;
}
