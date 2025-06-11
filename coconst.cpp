#include <iostream> 
using namespace std ;
class wall {
    private :
    double length ;
    double height ;
    public :
    wall (double len ,double hgt) 
    : length{len} 
    ,height{hgt} {

    }
    wall(const wall& obj) 
    : length{obj.length}
    ,height{obj.height}{

    }
    double calculateArea(){
        return length * height ;
    }
} ;
int main (){
    // create an object of wall class
    wall wall1 (10.5,8.6) ;
    wall wall2 = wall1 ;
    // print areas 
    cout << " Area of wall1:" << wall1.calculateArea()<< endl;
    cout << " Area of wall2 :" << wall2.calculateArea() ;
    return 0 ;
}