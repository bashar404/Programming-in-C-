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
};

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
    l1.get_item(2);
    return 0;
}
