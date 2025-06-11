#include <iostream> 
using namespace std ;
struct distance {
    int feet ;
    int inch ;
}
void print_distance() {
    cout << "Displaying Information." << endl ;
    cout << "Distance = " << feet << "feet" << inch << "inches" ;

};
int main () {
    Distance d ; 
    Distance* ptr = &d; 
    cout << "Enter feet :" ;
    cin >> ptr -> feet ;
    cout << "Enter inch :" ;
    cin >> ptr-> inch ; 
    ptr -> print_distance();
    return 0 ;
}