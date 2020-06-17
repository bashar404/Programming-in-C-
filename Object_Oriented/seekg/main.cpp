#include<iostream>
using namespace std;

class Dummy{
private:
    int a,b;

public:
    void setdata(int x, int y)
    {
        a=x,b=y;
    }

    void showdata()
    {
        cout<<a << "and" <<b;
    }

           };


int main()
{
    Dummy d1;
    d1.setdata(3,4);
    Dummy d2=d1;
    d1.showdata();
    return 0;
}
