#include <iostream>
using namespace std ;
class  Animal 
{
    public :
    void info () {
        cout << " I am an Animal " << endl ;
    }
};
class Dog : public Animal {
    public :
    void bark (){
        cout << " I am a Dog .woof woof " << endl ;
    }
};
class Dog  : public Animal {
    public : 
    void meow () {
        cout << " I am a Cat.Meow" << endl ; 
    }

};
class DOG : public Animaql {
    public :
    void eat {
        cout << " i eat from churi " << endl ;
    }
};
int main () {
    Dog dog1 ;
    cout << "Dog class : " << endl ;
    dog1.info() ;
    dog1.bark() ;
    Cat cat1 ;
    cout << "\nCat Class : " << endl ;
    cat1.info() ;
    cat1.meow() ;
    return 0 ; 
}
