#include <iostream>;
using namespace std;

class Fruits {

    public :
     void taste ();
     void size ();


} ;

void Fruits :: taste(){

    cout << "The taste is sweet \n";
}

void Fruits :: size (){

    cout << "The fruit size is samall\n";
}

int main () {
     Fruits banana ; // 1st object
     banana.taste ();
     banana.size ();

    Fruits Apple ; // 1st object
     Apple.taste ();
     Apple.size ();


return 0;
}