#include <iostream>
using namespace std;

class Complex{
          private:
              int a,b;
          public:
              void set_data(int x, int y)
                {
                    a=x;
                    b=y;
                }       
              void show_data()
                {
                  cout<<"\na="<<a<<" b="<<b<<endl;
                }  
              friend void fun(Complex); 
              void sun();
             };

             void fun(Complex c1)
             {
                cout<<"Sum of a+b"<<c1.a+c1.b;
             } 
             void Complex:: sun()
             {
               cout<<"Sun is out there";
             }

int main() 
{
  Complex c1,c2,c3;
  c1.set_data(5, 6);
  fun(c1);
  c1.sun();
}
