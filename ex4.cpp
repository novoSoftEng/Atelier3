#include<iostream>
using namespace std;
class MyClass
{
public:
    MyClass(/* args */);
    ~MyClass();
};

MyClass::MyClass(/* args */)
{
    cout<<"constructeur"<<endl;
}

MyClass::~MyClass()
{
    cout<<"deconstructeur"<<endl;
}

int main(){
	MyClass obj;
    
}