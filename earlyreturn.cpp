#include <iostream>
using namespace std ;
// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';
    return; // This is known as Early return in programming languages
    std::cout << "Hello"<<'\n';
}

int returnInt(){
    return 5;
}

int main(){
    printHi();
    std::cout<<"\n";
    std::cout << returnInt();
    return 0;
}

