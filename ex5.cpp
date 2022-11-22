#include<iostream>
using namespace std;
class Animal
{
public:
 string nom;
 int age;
 void set_value();
};
 class Zebra: public Animal{
    public:
    int date_naissance=2000;
    void set_value(int age,string nom){
        this->age=age;
        this->nom=nom;
    }
    void va(){
        cout<<"age: "<<age<<" nom :"<<nom<<" date naissance "<<date_naissance<<endl;
    }
 };
int main(){
	Zebra z;
    z.set_value(50,"ahmed");
    z.va();
}