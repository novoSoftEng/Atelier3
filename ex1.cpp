#include<iostream>
using namespace std;
class mere
{
public:
    void display(){
        cout<<"hello"<<endl;
    };
};

class fil: public mere{};
int main(){
	fil obj;
    obj.display();
}