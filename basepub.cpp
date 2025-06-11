#include <iostream>
using namespace std ;
class Base {
    private : 
    int pvt = 1 ;
    protected   :
    int prot = 2 ;
    public : 
    int pub = 3 ; 
    int getPVT() {
        return PVT ;
    
    }
    class PublicDerived : public Base {
        public : 
        int getProt(){
            return prot ;
        }
    }
};
int main () {
    PublicDerived object1 ;
    cout << "Private =" << object.getPVT() <<endl ;
    cout << "Protected =" << object.getProt() << endl;
    cout << "Public =" << object1.pub << end ; 
    return 0 ;
}