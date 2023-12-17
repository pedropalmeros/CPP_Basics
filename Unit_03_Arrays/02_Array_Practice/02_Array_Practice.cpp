#include <iostream>

using namespace std; 

int getMin(int a, int b);

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
    for(int i = 39; i >= 0 ; i--){
        cout << userInput[i];
        cout << " ";
    }

    // SORTING algorithms
    for (int i = 0; i < 40; i++){
        for (int j = 0; j < 39 - i; j++){
            if(userInput[i] > userInput[j+1]){
                int temp; 
                temp = userInput[i]; 
                userInput[i] = userInput[j+1]; 
                userInput[j+1] = temp;
            }
        }
    }

    // PRINTING THE SORTED ARRAY
    cout << "Printing the array: \n\n";
    for(int i = 0; i < 40 ; i++){
        cout << userInput[i];
        cout << " ";
    }


}

int getMin(int a, int b){
    if (a <= b){
        return a;
    }
    else{
        return b; 
    }
}