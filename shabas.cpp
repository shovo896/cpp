#include <iostream> 
using namespace std ;
class Base {
    public :
    void print () {
        cout << " Base Function" << endl ;

    }
};
class Derived : public Base {
    public : {
        cout << " Derived Function "  << endl;
    }
};
int main () {
    Derived derived1 ,derived2 ;
    derived1.print() ;
    derived2.print() ;
    return 0 ; 
}