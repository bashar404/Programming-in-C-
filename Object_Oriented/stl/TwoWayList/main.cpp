#include <iostream>
using namespace std;

class TwoWayList{
private:
    int capacity;
    int top_left;
    int top_right;
    int *ptr;
public:
    TwoWayList(int cap)
    {
        capacity=cap;
        top_left=-1;
        top_right=capacity;
        ptr=new int[capacity];
    }
    ~TwoWayList()
    {
        delete []ptr;
    }
    void pushLeft(int val);
    void pushRight(int val);
    int popLeft();
    int popRight();
    int peekLeft();
    int peekRight();
    int isEmptyLeft();
    int isEmptyRight();
    int isFull();
};
void TwoWayList::pushLeft(int val)
{
    if(isFull())
    {
        cout<<"\nOverflow";
    }
    else
    {
       top_left++;
       ptr[top_left]=val;
    }

}

void TwoWayList::pushRight(int val)
{
    if(isFull())
    {
        cout<<"\nOverflow";
    }
    else
    {
       top_right--;
       ptr[top_right]=val;
    }

}

int TwoWayList::popRight()
{
     if(isEmptyRight())
    {
        return (-1);
    }
    else{
        int value=ptr[top_right];
        cout<<"Currently Top right is : " <<ptr[top_right];
        top_right++;
        cout<<"Updated Right Top is : " <<ptr[top_right];
        return value;
    }
}

int TwoWayList::popLeft()
{
     if(isEmptyLeft())
    {
        return (-1);
    }
    else{
        int value=ptr[top_left];
        cout<<"Currently Top Left is : " <<ptr[top_left];
        top_left--;
        cout<<"Updated Left Top is : " <<ptr[top_left];
        return value;
    }
}

int TwoWayList::peekRight()
{
    if(isEmptyRight())
    {
        return (-1);
    }
    else{
        cout<<"Peek Right is : " <<ptr[top_right];
        return (ptr[top_right]);
    }
}

int TwoWayList::peekLeft()
{
    if(isEmptyLeft())
    {
        return (-1);
    }
    else{
        cout<<"Peek Left is : " <<ptr[top_left];
        return (ptr[top_left]);
    }
}

int TwoWayList::isEmptyLeft()
{
    if(top_left==-1)
    {
        cout<<"\nLeft side is empty";
        return 1;
    }
    else{
        cout<<"\nLeft side isn't empty";
        return 0;
    }
}

int TwoWayList::isEmptyRight()
{
    if(top_right==capacity)
    {
        cout<<"\nRight side is empty";
        return 1;
    }
    else{
        cout<<"\nRight side isn't empty";
        return 0;
    }
}

int TwoWayList::isFull()
{
    if(top_left+1==top_right)
    {
        cout<<"\nStack is Full";
        return(1);
    }
    else
    {
        cout<<"\nStack is not full";
        return 0;
    }
}
int main()
{
    TwoWayList s(6);
    s.pushLeft(10);
    s.pushLeft(20);
    s.pushLeft(30);
    s.pushRight(40);
    s.pushRight(50);
    s.pushRight(60);
    s.peekLeft();
    s.peekRight();
    s.popLeft();
    s.peekLeft();


    return 0;
}
