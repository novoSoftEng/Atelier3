#include<iostream>
using namespace std;
class obj
{
    
public:
static int i;

    void call(){
        i++;
    };
    void count(){
        cout<<"la fonction call a ete utilise "<<i<<" fois"<<endl;
    }
};
int obj::i=0;
int main(){
	obj obj;
    obj.call();
    obj.call();
    obj.call();
    obj.count();
}