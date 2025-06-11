#include <iostream> 
#include <string> 
using namespace std ;
struct person {
    string first_name ;
    string last_name ;
    int age ;
    float salary ;
} ;
void display_data(const person&);
int main (){
    person p{"John","Doe",22,14500};
    display_data(p);
    return 0 ;
}
void display_data (const person& p) {
    cout <<"First Name:"<< p.first_name <<endl ;
    cout << "Last Name :" << p.last_name << endl ;
    cout << "Age :"  << p.age << endl ;
    cout << "Salary : "<< p.salary ;
}