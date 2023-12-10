#include <iostream> 
#include <string> 
#include <sstream> 

using namespace std; 

int main(){
    string strLength, strWidth; 
    float Length, Width;

    cout << "Introdeuce the Rooms Length: ";
    getline(cin, strLength); 
    stringstream(strLength) >> Length;

    cout << "Introdeuce the Rooms Width : ";
    getline(cin, strWidth); 
    stringstream(strWidth) >> Width;

    cout << "Area: " << Length*Width << endl; 
}