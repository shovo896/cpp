#include <iostream> 
using namespace std ;
class simple {
public : 
int age ;
void displayAge () {
    cout << " Age = " << age << endl;
}
};
int main () {
    simple obj1 ;
    cout << "Enter your age :" ;
    cin >> obj1.age ;
    return 0 ; 
}