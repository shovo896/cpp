#include <iostream> 
using namespace std ;
class A  {
    void display() {
        cout << " Base class content." ;
    }
};
class B : public A {};
class C : public B {} ;
int main(){
    c.obj;
    obj.display();
    return 0;
}