#include <iostream>

using namespace std;

class A
    {
        int a;
    public:
        void f1()
        {
            cout<<"Hi";
        }
        virtual ~A(){}
    };
class B: public A
    {
        int b;
    public:
        void f2()
        {
            cout<<"Hello";
        }
        ~B(){}
    };

    int fun()
    {
        A *p = new B;
        p->f1();

        delete p;
    }
int main()
{
fun();
    return 0;
}
