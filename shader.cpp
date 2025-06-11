# include <iostream> 
using namespace std ;
class Base {
    public :
    void print () {
        cout << " Base function " << endl ;
    }
};
class Derived : public Base {
    public : 
    void print() {
        cout << " Derived Function " << endl ;
        Base :: print (); 
    }
};
int main () {
    Derived derived1 ;
    derived1.print () ;
    return 0 ;
}