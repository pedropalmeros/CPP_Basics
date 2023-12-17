#include <iostream>

using namespace std; 

int main(){
    int userInput[40];

    // reading the array
    for(int i = 0; i < 40 ; i++){
        cout << i+1 << " Introduce a number: "; 
        cin >> userInput[i];
    }

    cout << "\n\n";

    // printing the array as it was populated
    cout << "Printing the array: \n\n";
    for(int i = 0; i < 40 ; i++){
        cout << userInput[i];
        cout << " ";
    }

    // printing the array in reverse order
    cout << "Printing the array in reverser order: \n\n";
    for(int i = 40; i > 0 ; --i){
        cout << userInput[i];
        cout << " ";
    }
}