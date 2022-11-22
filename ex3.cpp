#include<iostream>
using namespace std;
class complex
{
public:
int r;
int im;
    void setN(){
    cout<<"entrer le nombre reele :"<<endl;
    cin>>r;
    cout<<"entrer le nombre imaginaire:"<<endl;
    cin>>im;
    
    };
};


    

class menu
{
public:
    int opr;
    menu();

};

menu::menu()
{
    cout<<"choisir un nombre \n1 pour addition \n2 pour soustraction \n3 pour mutiplicatin \n4 pour division\n ";
    cin>>opr;
}
int main(){

   complex c1;
   c1.setN();
   complex c2;
   c2.setN();
   complex c;
   menu m;

    switch (m.opr)
    {
    case 1:
        c.r=c1.r + c2.r;
        c.im=c1.im + c2.im;
         cout<<"reele "<<c.r<<" imaginaire "<<c.im;
        break;
    case 2:
        c.r=c1.r - c2.r;
        c.im=c1.im - c2.im;
        cout<<"reele "<<c.r<<" imaginaire "<<c.im;
        break;
    case 3:
        c.r=(c1.r * c2.r)-(c1.im * c2.im);
        c.im=(c1.im * c2.r);
         cout<<"reele "<<c.r<<" imaginaire "<<c.im;
        break;
    case 4:
        c.r=(c1.r / c2.r)-(c1.im / c2.im);
        c.im=(c1.im / c2.r);
      cout<<"reele "<<c.r<<" imaginaire "<<c.im;
        break;
    default:
        cout<<"entrer un nombre dans menu"<<endl;
        break;
    }
}