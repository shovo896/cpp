#include <iostream> 
using namespace std ;
int  main() {
    int num; 
    cout << " Enter total number of students : " ;
    cin >> num ;
    float* ptr ;
    ptr = new float[num] ;
    cout << " Enter GPA of studens : " << endl ;
    for ( int i = 0 ; i < num ; ++i){
        cout << "student" << i+1 << ":" ;
        cin << *(ptr+i) ;
    }
cout << "\nDisplaying GPA of students ." << endl ;
for (int i = 0 ; i <num ; ++i) {
    cout << "student" << i+1 << " :" << *(ptr+i) << endl;
}
delete[] ptr ;
ptr = nullptr ;
return 0 ; 





}