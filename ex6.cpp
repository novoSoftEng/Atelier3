#include <iostream>
using namespace std;
class Personne
{
private:
    string nom;
    string prenom;
    int date_naissance;

public:
    Personne(string nom, string prenom, int date_naissance)
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

public:
    int salaire;
    Employe(int salaire)
    {
        this->salaire = salaire;
    };
    void afficher()
    {
        cout << "salaire " << salaire << endl;
    };
};
class Chef : public Employe
{

public:
    string service;
    Employe(string service)
    {
        this->sevice = service;
    };
    void afficher()
    {
        cout << "salaire " << salaire <<"\nservice "<<service<< endl;
    };
};
class Directeur: public Chef
{

public:
    string societe;
    Employe(string societe)
    {
        this->societe = societe;
    };
    void afficher()
    {
        cout << "salaire " << salaire <<"\nservice "<<service<<"\nsociete "<<societe<< endl;
    };
};

int main()
{
    Personne p("ahmed","blak",1999);
 
}