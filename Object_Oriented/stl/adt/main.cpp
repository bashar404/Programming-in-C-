#include <iostream>

using namespace std;
class ArrayADT
{
private:
    int capacity;
    int last_index;
    int *ptr;
public:
    ArrayADT()
    {
        capacity=0;
        last_index=-1;
        ptr=NULL;
    }
void createArray(int capacity);
int get_item(int index);
void set_item (int index, int value);
void editItem(int index, int value);
int countItem();
void removeItem(int index);
int searchItem(int value);
void sortArray();
friend ostream& operator<<(ostream&,ArrayADT);
~ArrayADT()
{
    delete []ptr;
}
ArrayADT(ArrayADT &List)
{
     capacity=List.capacity;
     last_index=List.last_index;
     ptr=new int[capacity];
     for(int i=0;i<=List.last_index;i++)
        ptr[i]=List.ptr[i];
}
};
ostream& operator<<(ostream &dout,ArrayADT l)
{
 if(l.last_index==-1)
    cout<<"empty";
 for(int i=0;i<l.countItem();i++)
    cout<<" "<<l.get_item(i);
 return dout;
}

void ArrayADT::sortArray()
{
    int r,i,t;
    for(r=1; r<countItem(); r++)
    {
        for(i=0;i<countItem()-r;i++)
            if (ptr[i]>ptr[i+1])
            {
                t=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=t;
            }
    }
}


int ArrayADT::searchItem(int value)
{
    if(last_index<0){
       cout<<"empty";
       return (-1);
    }

    for(int i=0; i<last_index;i++)
        {
            if(ptr[i]==value)
            {

                cout<<value << " is at "<<i;
                return i;
            }

        }
        return -1;


}
void ArrayADT::removeItem(int index)
{
int i;
    if(last_index==-1)
        cout<<"empty";
    else if(index<0 || index>last_index)
        cout<<"overflow or underflow";
    else if (index>=0 || index <last_index)
    {
        i=index;
        while(i != last_index)
        {
            ptr[i]=ptr[i+1];
            i++;
        }last_index--;
    }
    else if (index==last_index)
    {
        last_index--;
    }
}

int ArrayADT::countItem()
{
    return (last_index+1);
}


void ArrayADT::editItem(int index, int value)
{
    if(index<0 || index>last_index)
        cout<<"error";
    else
        ptr[index]=value;
}


void ArrayADT::set_item (int index, int value)
{int i;
    if (last_index==capacity-1)
        {
            cout<<"Invalid";
            //return -1;
        }

    else if(index>capacity-1 || index <0  )
      {
            cout<<"Invalid";
           // return -1;
        }

        else if (index > last_index+1 )
             {
            cout<<"Invalid";
            //return -1;
        }
        else if (index<=last_index)
        {
             last_index++;
            i=last_index;
            while(i != index)
            {

            ptr[i]=ptr[i-1];
            i--;

            }
            ptr[index]=value;
        }
       else if (index==last_index+1)
       {
           last_index++;
            ptr[index]=value;
       }

}



int ArrayADT::get_item(int index)
{
    if(last_index==-1)
    {
        cout<<"Invalid index";
        return(-1);
    }
    if(index>last_index || index<0)
    {
        cout<<"Invalid index";
        return(-1);
    }

    return (ptr[index]);

}


void ArrayADT:: createArray(int capacity)
{
   this->capacity=capacity;
   last_index=-1;
   ptr=new int[capacity];
}

int main()
{
    ArrayADT l1;
    l1.createArray(5);
    l1.set_item(0,10);
    l1.set_item(1,20);
    l1.set_item(2,30);
    l1.set_item(1,40);
    l1.editItem(0,50);
    cout<<l1<<endl;
    l1.removeItem(3);
    cout<<l1<<endl;
    l1.searchItem(40);

    l1.sortArray();
    cout<<l1<<endl;
    return 0;
}
