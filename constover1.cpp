#include <iostream>
using namespace std ;
class Room{
    private :
    double length ;
    double breadth ;
    public : 
    // 1. constructor with no aarguments 
    Room () {
        length = 6.9 ;
        breadth = 4.2 ;

    }
    // 2.constructor with one argument 
    Room(double l ,double b) {
        length = l;
        breadth= b;
    }
    // 3. constructor with one argument 
    Room (double len) {
        length = len ;
        breadth = 7.2 ;
        }
        double calculateArea(){
            return length * breadth ;
        }
};
int main () {
    Room room1 ,room2(8.2,6.6) ,room3(8.2) ;
    cout << "when no argument passed:" << endl ;
    cout << "Area of room = " << room1.calculateArea() << endl ;
    cout << "\nwhen (8.2,6.6) is passed :" << endl;
    cout << "Area of room = " << room2.calculateArea() << endl ;
    cout << "\nwhen breadth is fixed to 7.2 and (8.2)is passed :" << endl ;
    cout << " Area of room = " << room3.calculateArea()<< endl ;
    return 0 ; 
}