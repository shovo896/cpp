#include <iostream> 
using namespace std ;
int add(const int& num1, const int& num2){
    return num1 + num2 ;

} 
int main() {
    int number1 ,number2 ;
    cout << "Enter the number:  " ; 
    cin >> number1 ;
    cout << "Enter the second number :" ;
    cin >> number2 ;
    int sum = add(number1 , number2) ;
    cout << " The sum of "<< number1 << "and " << number2 << "is " << sum << endl ; 
    return 0 ;








}