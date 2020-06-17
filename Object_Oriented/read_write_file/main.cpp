#include <iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include<string.h>
using namespace std;

class Book{
    private:
        int book_id;
        char book_title[20];
        float book_price;
    public:
        Book()
        {
            book_id=0;
            strcpy(book_title,"no title");
            book_price=0;
        }
        void getBookData();
        void showBookData();
        void storeBookData();
        void viewBookData();
        void viewSearchBook(char *);
        void deleteBookData(char *);
          };

void Book::deleteBookData(char *t)
{
    ifstream fin;
    ofstream fout;
    fin.open("f1.txt",ios::in|ios::binary);
    fout.open("temp.txt",ios::app|ios::binary);
    fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
    {
       if(!strcmp(t,book_title))
        {

            fout.write((char*)this,sizeof(*this));
        }
        fin.read((char*)this,sizeof(*this));
    }

        fin.close();
        fout.close();
        remove("f1.txt");
        rename("f1.txt","temp.txt");

}

void Book::viewSearchBook(char *t)
{
    ifstream fin;
    fin.open("f1.txt",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));

    while(!fin.eof())
    {
       if(!strcmp(t,book_title))
        {
            showBookData();
        }
        fin.read((char*)this,sizeof(*this));
    }
        fin.close();
}

void Book::viewBookData()
{
    ifstream fin;
    fin.open("f1.txt",ios::out|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        showBookData();
    fin.read((char*)this,sizeof(*this));
    }
    fin.close();
}
void Book::storeBookData()
{
    ofstream fout;
    fout.open("f1.txt",ios::app|ios::binary);
    //getBookData();
    fout.write((char*)this,sizeof(*this));
    fout.close();
}

void Book::showBookData()
{
    cout<<" "<<book_id<<" "<<book_title<<" "<<book_price;
}
void Book::getBookData()
{
cout<<"Enter book_id, title and price";
cin>>book_id;
cin>>book_title;
cin>>book_price;
}

int main()
{
Book b1;
b1.getBookData();
b1.storeBookData();
b1.getBookData();
b1.storeBookData();
b1.viewBookData();
}
