#include<iostream>
using namespace std;
class Media
{
protected:
    string titre="sory";
public:
virtual void imprimer()=0;
virtual char* id()=0;
};
class Livre:public Media
{
protected:
    string auteur="lala";
    int date_publication=2020;
public:
    void imprimer(){
      cout<<"titre "<<titre<<"\nauteur "<<auteur<<"\ndate_publication "<<date_publication<<endl;
    };
    char* id(){
    }
};
class Audio:public Media
{
protected:
    string clarite="160mh";
    public:
virtual void imprimer()=0;
virtual char* id()=0;
};
class CD:public Audio
{
    protected:
    int volume=50;
public:
void imprimer(){
      cout<<"titre "<<titre<<"\nclarite "<<clarite<<"\nvolume "<<volume<<endl;
    };
   char* id();
};
class Cassete:public Audio
{
    protected:
    int poids=50;
public:
   void imprimer(){
      cout<<"titre "<<titre<<"\nclarite "<<clarite<<"\npoids "<<poids<<endl;
    };
    char* id();
   
};
class Disque:public Audio
{
    protected:
    int capacite=90;
public:
   void imprimer(){
      cout<<"titre "<<titre<<"\nclarite "<<clarite<<"\ncapacite "<<capacite<<endl;
    };
    char* id();
};
class Presse:public Media
{
protected:
    int nom;
public:
    char* id(){
        return "id";
    }
};
class Journal :public Presse{
protected:
int poids=50;
void imprimer(){
    cout<<"titre "<<titre<<"\nnom "<<nom<<"\npoids "<<poids<<endl;

}


};


class Revue :public Presse
{
protected:
int type;
void imprimer(){
cout<<"titre "<<titre<<"\nnom "<<nom<<"\ntype "<<type<<endl;

}
};
class Magazine :public Presse
{
protected:
int prix;
void imprimer(){
cout<<"titre "<<titre<<"\nnom "<<nom<<"\nprix "<<prix<<endl;

}
};




int main(){
    Livre l;
    l.imprimer();
  

return 0;
}