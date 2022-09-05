#include <iostream>;
using namespace std;



class Students_Marks () {

    public :

    int Math ;
    int Science ;
    int english ;
    int social_studies ;
    int Hindi ;
    Students_Marks(int a,b,c,d,e){

    math = a;
    Science = b;
    english = c;
    hindi = d;
    math = e;
    }

};

int main () {

    Students_Marks Shubham (50,65,85,95,75);
    Students_Marks Abhishek ("50","75","85","65","85");
    cout << "Shubham marks in math  ="<<Shubham.math<<"\n";

return 0;
}