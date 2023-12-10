#include <iostream> 
#include <string>

using namespace std; 

int main(){
    string name1, address1, phone1;
    string name2, address2, phone2;

    cout << "USER 1 -> Introduce your name: ";
    getline(cin, name1); 
    cout << "USER 1 -> Introduce your address: ";
    getline(cin, address1); 
    cout << "USER 1 ->  Introduce your phone: ";
    getline(cin, phone1); 

    cout << "USER 2 -> Introduce your name: ";
    getline(cin, name2); 
    cout << "USER 2 -> Introduce your address: ";
    getline(cin, address2); 
    cout << "USER 2 ->  Introduce your phone: ";
    getline(cin, phone2);

    cout << "\n\n" << name1 << endl; 
    cout << "\t\t" << address1 << endl; 
    cout << "\t\t" << phone1 << endl; 


    cout << "\n\n" << name2 << endl; 
    cout << "\t\t" << address2 << endl; 
    cout << "\t\t" << phone2 << endl; 

    return 0; 
}