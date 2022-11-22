#include<iostream>
using namespace std;
class Shape
{
public:
    int l;
    int h;
    Shape(){
        l=5;
         h=20;
    };
};
class rectangle:public Shape
{
public:
    void area(){
        cout<<"l'area d un rectangle est :"<<l*h<<endl;
    }
};
class triangle:public Shape
{
public:
    void area(){
        cout<<"l'area d un triangle est :"<<0.5*(l*h)<<endl;
    }
};



int main(){
	rectangle r;
    r.area();
    triangle t;
    t.area();
}