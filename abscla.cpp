#include <iostream> 
using namespace std ;
class Shape {
    protected :
    float dimension ;
    public : 
    void getDimension() {
        cin >> dimension ;
    } 
    virtual float calculateArea () =0 ;
};
class Circle : public Shape {
    public :
    float calculateArea() {
        return 3.1416 * dimension * dimension ;
    }
}; 
int main () {
    Square square ;
    Circle circle ;
    cout << " Enter the length of square : " ; 
    square.getDimension() ;
    cout << " Area of square : " << square.calculateArea() << endl ;
    cout << " n\ Enter radius of the circle  : " ;
    circle.getDimension () ;
    cout << "Area of the circle : " << circle.calculateArea()  ;
    cout << " Area of the circle : " << circle.calculateArea () << endl ; 
    return 0 ; 
}