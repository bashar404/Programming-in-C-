#include <iostream>
#include<stdio.h>
using namespace std;

class LinkedListADT{
private:
    struct node{
        int item;
        node *next;
    };
    node *start;
    node* Search (int data)
    {
        node *t;t=start;
        if(start==NULL)
            return(NULL);


        else{

            while(t != NULL)
            {
                if(t->item==data)
                    return (t);
                t=t->next;
            }
        }
        return (NULL);
    }
public:
    LinkedListADT()
    {
        start=NULL;
    }
    void insertAtStart(int data);
    void inserAtLast(int data);
    void insertAfter(int currentData, int data);
    int deleteItemFromStart();
    int deleteItemFromLast();
    int deleteCurrentItem(int currentData);
    void editItem(int currentData, int newData);
    int countItems();
    int getFirstItem();
    int getLastItem();
    void viewList();
    void sortList();
  ~LinkedListADT()
  {
       while(start != NULL)
           deleteItemFromStart();
    }
};

void LinkedListADT::sortList()
{
    node *t;
    int i,r,n,x;
    n=countItems();
    for(r=1; r<=n-1;r++)
    {
        t=start;
        for(i=0;i<=n-1-r;i++)
        {
            if(t->item > t->next->item)
            {
              x=t->item;
              t->item = t->next->item;
              t->next->item=x;
            }
            t=t->next;
        }

    }
}

void LinkedListADT::viewList()
{
    node *t=start;
    while(t->next != NULL)
    {
        cout<<t->item;
        t=t->next;
    }

    cout<<t->item;
}

int LinkedListADT::getLastItem()
{
    node *t=start;
    while(t->next != NULL)
    {
        t=t->next;
    }
    return(t->item);
}

int LinkedListADT::getFirstItem()
{
 if(start==NULL)
 {
     cout<<"Empty";
     return(-1);
 }
return(start->item);
}

int LinkedListADT::countItems()
{
    node *t1= start;
    int i=1;
    while(t1->next != NULL)
    {i++;
        t1=t1->next;
    }

    return(i);
}
void LinkedListADT::editItem(int currentData, int newData)
{
    node *t=Search(currentData);
    if(t==NULL)
        cout<<"Invalid Operation";
    else
        t->item=newData;
}

int LinkedListADT::deleteCurrentItem(int currentData)
{
    node *t=Search(currentData);
    if(t==NULL)
    {
        cout<<"Invalid";
        return 0;
    }
    if(t->next==NULL){
        deleteItemFromLast();
        return 1;
    }
    while(t->next != NULL){
         t->item=t->next->item;
            t=t->next;
    }
   deleteItemFromLast();
    return (1);

}

int LinkedListADT::deleteItemFromLast()
{
    if(start==NULL){
        cout<<"Underflow";
        return (0);
    }
    if(start->next==NULL){
        delete(start);
        start=NULL;
        return(1);
    }

    node *t1,*t2;
    t1=t2=start;
    do{
        t2=t1;
        t1=t1->next;
    }while(t1->next != NULL);
    delete(t1);
    t2->next=NULL;
    return(1);

}

int LinkedListADT::deleteItemFromStart()
{
    node *r;
    if(start==NULL){
        cout<<"Underflow";
        return (0);
    r=start;
    start=start->next;
    delete (r);
    return 1;
    }

}

void LinkedListADT::insertAfter(int currentData, int data)
{
  node *t=Search(currentData);
  if(t==NULL)
    cout<<"no such value exists";
  else{
    node *n=new node;
    n -> item = data;
    n -> next=t->next;
    t->next=n;
  }
}

void LinkedListADT::inserAtLast(int data)
{
    node *t=start;
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL){
        start=n;
    }

    else{
        while(t->next != NULL)
            t=t->next;
        t->next=n;
    }
}

void LinkedListADT::insertAtStart(int data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}


int main()
{
    LinkedListADT l1;

   l1.insertAtStart(10);
   l1.insertAtStart(20);
   l1.insertAtStart(30);
   l1.inserAtLast(40);
   l1.insertAfter(20,3);
   l1.viewList();
   l1.sortList();
   cout<<"\n";
   l1.viewList();
   l1.deleteCurrentItem(3);cout<<"\n";
   l1.viewList();
   l1.editItem(10,14);
   cout<<"\n";
   l1.viewList();
        return 0;
}
