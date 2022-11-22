#include <iostream>
using namespace std;
class Personne
{
private:
    string nom;
    string prenom;
    int date_naissance;

public:
    Personne(string nom,string prenom,int date_naissance)
    {
        this->nom = nom;
        this->prenom = prenom;
        this->date_naissance = date_naissance;
    };
    void afficher()
    {
        
        cout << "nom " << nom << "\nprenom " << prenom << "\ndate naissance " << date_naissance << endl;
    };
};
class Employe : public Personne
{
  int salaire;
public:
  
    Employe(string nom, string prenom, int date_naissance,int salaire):Personne(nom, prenom,date_naissance)
    {
        this->salaire = salaire;
    };
    void afficher()
    {
        Personne::afficher();
        cout << "salaire " << salaire << endl;
    };
};
class Chef : public Employe
{
 string service;
public:
   
    Chef(string nom, string prenom, int date_naissance,int salaire,string service):Employe(nom,prenom, date_naissance,salaire)
    {
        this->service = service;
    };
    void afficher()
    {
        Employe::afficher();
        cout <<"service "<<service<< endl;
    };
};
class Directeur: public Chef
{
string societe;
public:
Directeur(string nom, string prenom, int date_naissance,int salaire,string service,string societe):Chef(nom,prenom, date_naissance,salaire,service)
    {
        this->societe = societe;
    };
    void afficher()
    {
        Chef::afficher();
        cout <<"societe "<<societe<< endl;
    };
};

int main()
{
    Directeur d("liefrid","chihab eddine",2002,2000,"etudiant","fstt");
    d.afficher();
 
}