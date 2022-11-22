#include <iostream>
using namespace std;
class Personne
{
private:
    string nom;
    string prenom;
    int date_naissance;

public:
    Personne((static string n), (static string pre), (static int dn))
    {
      nom = n;
    prenom = pre;
    date_naissance = dn;
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
    
    Employe(static int s)
    {
        salaire = s;
    };
    void afficher()
    {
        cout << "salaire " << salaire << endl;
    };
};
int main()
{
    Personne p("ahmed","blak",1999);
    p.afficher();

 
}