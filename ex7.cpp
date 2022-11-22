#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class vecteur3d
{
public:
float x ;
float y;
float z;
    vecteur3d(){
        this->x=0;
        this->y=0;
        this->z=0;
    };
    vecteur3d(float x ,float y,float z){
        this->x=x;
        this->y=y;
        this->z=z;
    };
    void afficher(){
        cout<<"("<<x<<", "<<y<<" ,"<<z<<")"<<endl;
    };
    static vecteur3d somme(vecteur3d v1,vecteur3d v2){
        vecteur3d v;
        v.x=v1.x+v2.x;
        v.y=v1.y+v2.y;
        v.z=v1.z+v2.z;
        return v;
    };
    static void produit(vecteur3d v1,vecteur3d v2){
        cout<<"le produit scalaire est :"<<v1.x*v2.x+v1.y*v2.y+v1.z*v2.z<<endl;
    };
    static void comparer(vecteur3d v1,vecteur3d v2){
        if(v1.x==v2.x && v1.y==v2.y && v1.z==v2.z ){
            cout<<"les deux vecteurs sont egale"<<endl;
        }else cout<<"les deux vecteurs ne sont pas egale"<<endl;
    }
    float norme(){
        return pow(pow(x,2)+pow(y,2),0.5);
    }
    static void g_norme(vecteur3d v1,vecteur3d v2){
        if(v1.norme()<v2.norme()){
            cout<<"le vecteur 2 a une norme plus grand"<<endl;
        }else if(v1.norme()>v2.norme()){
            cout<<"le vecteur 1 a une norme plus grand"<<endl;
        }else cout<<"les deux norme sont egale"<<endl;
    }
    };
int main()
{
    vecteur3d v;
   vecteur3d v1(5,9,6);
   v1.afficher();
    vecteur3d v2(5,9,6);
    v2.afficher();
    v=vecteur3d::somme(v1,v2);
    v.afficher();
    vecteur3d::produit(v1,v2);
    vecteur3d::comparer(v1,v2);
    float n=v.norme();
    cout<<"la norme est :"<<n<<endl;
    vecteur3d::g_norme(v1,v2);

 return 0;
}
