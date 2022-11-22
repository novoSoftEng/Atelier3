#include <iostream>
using namespace std;

class Animal{

public:
	const char* nom;
	int age;
	Animal(const char* n) : nom (n){};
	void setValeur(int a){age = a;};	
};

class Zebra : public Animal{
public:
	const char* origin;
	Zebra (const char* n, const char* o) : Animal (n), origin (o){};
	void afficher(){cout << "nom: "<< nom << "\nage: " << age << "\nplace d'origin: "<< origin<< endl;};

};

class Dolphin : public Animal{
public:
	const char* origin;
	Dolphin (const char* n, const char* o) : Animal (n), origin (o){};
	void afficher(){cout << "nom: "<< nom << "\nage: " << age << "\nplace d'origin: "<< origin<< endl;};

};

int main(){
    char* nom="harry";
    char* o="newYork";
	Zebra z(nom,o);
    z.setValeur(15);
    z.afficher();
    char* n="poter";
    char* o1="maroc";
	Dolphin d(n,o1);
    d.setValeur(90);
    d.afficher();



}