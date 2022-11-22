#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class vecteur3d
{
public:
float x ;
float y;
float z;
    vecteur3d(float x ,float y,float z){
        this->x=x;
        this->y=y;
        this->z=z;
    };
    void affichage(){
        cout<<"("<<x<<", "<<y<<" ,"<<z<<")"<<endl;
    };
    vecteur3d somme(vecteur3d v1(float x1 ,float y1,float z1),vecteur3d v2(float x2 ,float y2,float z2)){
        vecteur3d v(float x0 ,float y0,float z0);
        v->x=v1.x+v2->x;
        v->y=v1->y+v2->y;
        v->z=v1->z+v2->z;
        return v;
    };
    /*void produit(vecteur3d v1,vecteur3d v2){
        cout<<"le produit scalaire est :"<<v1.x*v2.x+v1.y*v2.y+v1.z*v2.z<<endl;
    };*/



};



int main(){
	
}