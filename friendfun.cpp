#inclue <iostream>
using namespace std ;
class Distance {
    private : 
    int meter ;
    friend int addFive (Distance) ;
    public : 
    Distance () : meter(0) {}
} ;
int addFive (Distance d ) {
    d.meter += 5 ; 
    return d.meter ;

}
int main () P{
    Distance D ;
    cout << "Distance : " << addFive(D) ; 
    return 0 ; 
}