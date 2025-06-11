#include <iostream> 
using namespace std ;
class Shape {
    public : 
    Shape () = default ;
    virtual double get_area() const {
        return 0.0 ;
    }
    Shape = default ;
};
class Square : public Shape {
    private : 
        Square (double len = 1.0 ) : length(new double {len}) {

        }
        double get_area() const override { 
            return * length * length ;
        }
};
int main () {
    Square * shape1 = new Square (1.5);
    cout << "area of Square : " << shape2 -> get area () << endl ; 
    delete shape ;
    return 0 ;
}