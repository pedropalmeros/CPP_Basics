#include <iostream>
#include <string>

int main(){
    int year = 0;
    int age = 0;
    std::string name = "";

    //print a message to the user
    std::cout << "What year is your favorite?";

    //get the user responde and assign it to the variable year
    std::cin >> year; 

    //output response to user
    std::cout << "How interesting, your favorit year is " << year << std::endl;

    //print a message the te user
    std::cout << "At what age did you lear to ride a bike?";

    //get the user response and assign it to the variable age
    std::cin >> age;


    //output response to user
    std::cout << "How interesting you learned to ride at " << age << std::endl; 

    std::cout << "What is your name? ";
    std::cin >> name; 
    std::cout << "Hello " << name << std::endl; 

    return 0;

}