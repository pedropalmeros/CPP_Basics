#include <iostream> 
#include <string>
#include <sstream> 

using namespace std; 

int main(){
    string stringLength;
    float inches = 0;
    float yardage = 0; 

    cout << "Enter number of inches: "; 
    getline(cin, stringLength); 
    stringstream(stringLength) >> inches;
    cout << "You entered: " << inches << endl; 
    yardage = inches/36; 
    cout << "Yardage is : " << yardage << endl; 
    return 0;
}