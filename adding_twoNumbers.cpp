#include<iostream>
using namespace std ;

int addition (int a , int b)
{
return (a+b);

}

int main ()
{
  
  int sum ;
    int a ;
    int b;
    int add ;
   cout << "enter the value of a\n";
   cin >>  a;
   cout << "enter the value of b\n";
   cin >> b;
   sum = addition (a ,b);
  cout << "sum of a and b = " << sum << endl;


  return 0;
  

}
